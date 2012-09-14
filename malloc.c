#include <stdio.h>

void fn(){
	printf("programa terminado\n");
}

void main(){
	atexit(&fn);
	// int size;
	// scanf("%d",&size);
	// printf("size=%d\n",size);
	// int arreglo[size];
	// arreglo[0]=1;
	// printf("arreglo[0]=%d\n",arreglo[0]);
}



