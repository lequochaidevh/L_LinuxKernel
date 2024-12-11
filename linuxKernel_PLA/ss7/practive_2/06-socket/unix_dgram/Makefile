.PHONY: clean all


all:
	gcc -o client dgram_client.c
	gcc -o server dgram_server.c

rmSockFd:
	rm -f sock_dgram

clean:rmSockFd
	rm -rf client server 
	#$(MAKE) rmSockFd
