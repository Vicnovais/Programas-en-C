#include <stdio.h>

int myStrlen(char *s)
{
	int n;
	n = 0;
	while (*s++)
		n++;
	return(n);
}

int main(){
	char* hilera = "hola";
	printf("strlen(\"hola\")=%d\n",myStrlen(hilera));
	return 0;
}