#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

main(){
	printf("%s\n", htonl(INADDR_ANY));
	printf("%d\n", atoi("8085"));
}