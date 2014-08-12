#include <stdio.h>

float convertirMillasAkm(int km){
	return km * 1.609;
}

main(){
	int i;
	for(i = 1; i <= 10; ++i)
	{
		printf("%d millas equivale a %f km\n", i, convertirMillasAkm(i));
	}
}

