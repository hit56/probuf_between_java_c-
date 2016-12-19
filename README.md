C++ server：protoc -I=./ --cpp_out=./ Infor.proto

Java client：protoc  --java_out=./  Infor.proto

Infor.proto文件：

message my_message{
    required string startedTime =1;
    required string version=2;
    required double configuredCapacity=3;
    required double dfsUsed =4;
    required int32 fileNum=5;
    required int32 replicatedFilesNum =6;
    required int32 blockNum =7;
    required int32 livedNodeNum =8;
    required int32 decommissioningNodeNum=9;
}



Server端的c++代码：

#include <netinet/in.h>    // for sockaddr_in
#include <sys/types.h>    // for socket
#include <sys/socket.h>    // for socket
#include <unistd.h>
#include <stdio.h>        // for printf
#include <stdlib.h>        // for exit
#include <string.h>        // for bzero
#include <string>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include "Infor.pb.h"


#define HELLO_WORLD_SERVER_PORT    8000 
#define LENGTH_OF_LISTEN_QUEUE 20
 
int main()
{
    std::string time = "2015-06-25";
    std::string version = "0.0.1";
    double config = 2.0;
    double dfs = 3.0;
    int file = 1000;
    int rep = 1000;
    int block = 1000;
    int live = 1000;
    int de = 1000;


    struct sockaddr_in server_addr;
    bzero(&server_addr,sizeof(server_addr)); 
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htons(INADDR_ANY);
    server_addr.sin_port = htons(HELLO_WORLD_SERVER_PORT);
 
    int server_socket = socket(PF_INET,SOCK_STREAM,0);
    if( server_socket < 0)
    {
        printf("Create Socket Failed!");
        exit(1);
    }
    { 
       int opt =1;
       setsockopt(server_socket,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(opt));
    }
     
    if( bind(server_socket,(struct sockaddr*)&server_addr,sizeof(server_addr)))
    {
        printf("Server Bind Port : %d Failed!", HELLO_WORLD_SERVER_PORT); 
        exit(1);
    }
 
    if ( listen(server_socket, LENGTH_OF_LISTEN_QUEUE) )
    {
        printf("Server Listen Failed!"); 
        exit(1);
    }
    while (true) 
    {
        struct sockaddr_in client_addr;
        socklen_t length = sizeof(client_addr);


        int new_server_socket = accept(server_socket,(struct sockaddr*)&client_addr,&length);
        if ( new_server_socket < 0)
        {
            printf("Server Accept Failed!\n");
            break;
        }
       
        my_message mm;
        mm.set_startedtime(time);
        mm.set_version(version);
        mm.set_configuredcapacity(config);
        mm.set_dfsused(dfs);
        mm.set_filenum(file);
        mm.set_replicatedfilesnum(rep);
        mm.set_blocknum(block);
        mm.set_livednodenum(live);
        mm.set_decommissioningnodenum(de);
        file += 1; rep += 1; block += 1; live += 1; de += 1;
    
        int len = mm.ByteSize() + 4;
        char *buffer = new char[len];


        google::protobuf::io::ArrayOutputStream arrayOut(buffer, len);
        google::protobuf::io::CodedOutputStream codedOut(&arrayOut);
        
        codedOut.WriteVarint32(mm.ByteSize());


        //write protobuf my_message mm to CodedOutputStream
        mm.SerializeToCodedStream(&codedOut);    
 
        if(send(new_server_socket,buffer,len,0)<0)
        {
            printf("Send Failed\n");
            break;
        }


        close(new_server_socket);
        delete buffer;
    }
    close(server_socket);
    return 0;
}



Client的Java源码:

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.NET.Socket;


import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.List;


import com.google.protobuf.CodedInputStream;


public class Client {
    public static final String IP_ADDR = "127.0.0.1";    //server ip 
    public static final int PORT = 8000;    //port  
    
    public static void main(String[] args) throws InterruptedException {  
        System.out.println("client starting...");  
        
        while (true) {  
            Thread.sleep(1000);
            Socket socket = null;
            try {
                socket = new Socket(IP_ADDR, PORT);  
                  
                InputStream input = socket.getInputStream();
                try{           
                    // 反序列化
                    Infor.my_message mm = Infor.my_message.parseDelimitedFrom(input);
                    
                    System.out.println(); 
                    System.out.println(); 
                    System.out.println(); 
                    System.out.println("服务器端返回过来的是: ");  
                    System.out.println("startedTime:" + mm.getStartedTime());
                    System.out.println("version:" + mm.getVersion());
                    System.out.println("configuredCapacity:" + mm.getConfiguredCapacity());
                    System.out.println("dfsUsed:" + mm.getDfsUsed());
                    System.out.println("fileNum:" + mm.getFileNum());
                    System.out.println("replicatedFilesNum:" + mm.getReplicatedFilesNum());
                    System.out.println("blockNum:" + mm.getBlockNum());
                    System.out.println("livedNodeNum:" + mm.getLivedNodeNum());
                    System.out.println("decommissioningNodeNum:" + mm.getDecommissioningNodeNum());
                } catch(Exception e)
                {
                    System.out.println(e.toString());
                    System.out.println("catch e");
                    break;
                }
                input.close();
            } catch (Exception e) {
                System.out.println("客户端异常:" + e.getMessage()); 
            } finally {
                if (socket != null) {
                    try {
                        socket.close();
                    } catch (IOException e) {
                        socket = null; 
                        System.out.println("客户端 finally 异常:" + e.getMessage()); 
                    }
                }
            }
        }  
    }  
}

