#include <stdio.h>

void swapValues(int a, int b){
	printf("\tantes de swap: a=%d, b=%d",a,b);
	getchar();
	int temp = a;
	a = b;
	b = temp;
	printf("\tluego de swap: a=%d, b=%d",a,b);
	getchar();
}

int main(){
	int a = 5;
	int b = 6;
	printf("a=%d, b=%d",a,b);
	getchar();
	swapValues(a,b);
	printf("a=%d, b=%d\n",a,b);
	return 0;
}

