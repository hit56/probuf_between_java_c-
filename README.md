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

Server端为c++代码：Server.cpp

Client端为Java源码:Infor.java
