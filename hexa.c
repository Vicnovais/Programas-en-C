#include <stdio.h>
typedef int q;

q fn(char* x, char* y, q z)
{
    while(z--)
        if(*x++ != *y++)
            return *(x - 1) - *(y - 1);
    return 0;
}

void main(){
	printf("%d\n",fn("hola","hoy",2));
}

