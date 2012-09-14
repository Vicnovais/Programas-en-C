#include <stdio.h>

char* fn(char * s, char c){
	int temp = s;
	printf("%d",temp);
	return NULL;
}

char *strrchr (char *s, char c)
{
  char *r = 0;
  do {
    if (*s == c)
      r = (char*) s;
  } while (*s++);
  return (r);
}

main(){
	char* s=strrchr("hola mundo",'u');
	int ch = *s;
	printf("%c",ch);
	printf("\n");
}

