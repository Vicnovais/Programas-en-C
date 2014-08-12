#include <stdio.h>

void func(int);
int* func2(int*);

int main(){
	void (*fp)(int);
	fp = func;
	printf("invocación (*fp)(1):");
	(*fp)(3);
	printf("invocación fp(1):");
	fp(3);
//	fp(2);
	//int a = 2;
	//int *ptr = func2(&a);
	//printf("*ptr=%d\n",*ptr);
	return 0;
}

void func(int arg){
      printf("%d\n", arg);
}

/*
int* func2(int *a){
	*a = 666;
	return a;
}*/
