#include <stdio.h>

void main(){
	int x,*y, *z;
	x = 666;
	y = &x;
	z = &y;
	printf("valor de x:%d\n",x);
	printf("dirección de memoria de x:%d\n",&x);
	
	printf("valor apuntado por y:%d\n",*y);
	printf("valor de y:%d\n",y);
	printf("dirección de memoria de y:%d\n",&y);
	
	printf("valor apuntado por z:%d\n",*z);
	printf("valor de z:%d\n",z);
	printf("dirección de memoria de z:%d\n",&z);
	
	printf("primer printf:%d\n",&z); // primer printf
	printf("segundo printf:%d\n",*z); // segundo printf
}
