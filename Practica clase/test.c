#include <stdio.h>
#include <string.h>

int strlen2(char *s) {
	int n;
	for (n = 0; *s != '\0'; s++) 
		n++;
	return n;
}

void strcpy2(char *s, char *t) {
	while ((*s++ = *t++) != '\0')
		;
}

char *strcat(char *dest, const char *src)
{
    int i,j;
    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;
}


main() {
	char *str1 = "hola";
	char *str2 = "hey";	
	strcpy(&str1,&str2);
	//printf("%s\n", str1);
	printf("length %d\n", strlen(str1));
	//printf("length:%d\n", strlen(str));
}