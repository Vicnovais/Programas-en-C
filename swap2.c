#include <stdio.h>

void swapValues(int *ptra, int *ptrb){
	printf("\tantes de swap: a=%d, b=%d",*ptra,*ptrb);
	getchar();
	int temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
	printf("\tluego de swap: a=%d, b=%d",*ptra,*ptrb);
	getchar();
}

int main(){
	int a = 5;
	int b = 6;
	printf("a=%d, b=%d",a,b);
	getchar();
	swapValues(&a,&b);
	printf("a=%d, b=%d\n",a,b);
	return 0;
}

