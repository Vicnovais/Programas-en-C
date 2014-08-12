#include <stdio.h>

int main(){
	int letra, contador;
	contador = 0;
	
	while((letra = getchar()) != EOF){
		if (letra == '\n'){
			++contador;
		}
	}
	printf("Numero de lineas leidas: %d\n\n", contador);
	return 0;
}
