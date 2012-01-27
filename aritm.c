#include <stdio.h>

int main(void)
{
	int arreglo[] = {1,2,3,4,5,6};
	int *ptr;
    int i;
    ptr = &arreglo[0];
    printf("\n");
    for (i = 0; i < 6; i++)
    {
		printf("arreglo[%d] = %d   ",i,arreglo[i]);
		printf("ptr + %d = %d\n",i, *++ptr);
    }
    return 0;
}
