CC = g++
INCLUDEDIR= -I/usr/local/include/google/

LIB_PATH = -L/usr/local/lib/
TEST_TARGET = Server
TEST_SRC = ./Server.cpp ./Infor.pb.cc
LDFLAGS := -lprotobuf
all:
	$(CC) -g  $(TEST_SRC) $(LDFLAGS) -o $(TEST_TARGET) $(LIB_PATH)  $(INCLUDEDIR)
  
clean:
	rm -rf *.o $(TEST_TARGET)
