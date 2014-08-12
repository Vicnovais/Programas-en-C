#include <stdio.h>

int main()
{

	int j, k;
	int *ptr;
	    j = 1;
	    k = 2;
	    printf("el valor de j es %d y está almacenado en %d\n",j,&j);
	    printf("el valor de k es %d y está almacenado en %d\n",k,&k);
	    ptr = &k;
	    printf("el valor del entero al que apunta ptr es %d\n",*ptr);
	printf("la posición de memoria a la cual referencia ptr es %d\n",ptr);
	    *ptr = 7;
	    printf("el nuevo valor de k es %d\n",k);
	    k = 8;
	    printf("el valor nuevo del entero al que apunta ptr es %d\n",*ptr);
    return 0;

}

