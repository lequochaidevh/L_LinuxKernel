


GCC:=/home/hai/workingspace/bbb/gcc-linaro-6.5.0-2018.12-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc

all:
	gcc -o server stream_server.c
	gcc -o client stream_client.c
BBB:
	$(GCC) -o client stream_client.c
rmSockFd:
	rm -f sock_stream

clean:
	rm -rf client server sock_stream
