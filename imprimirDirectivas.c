#include <stdio.h>
#define SIGNO_NUMERAL '#'
#define SALTO_LINEA '\n'

int main(){
	int letra, esDirectiva = 0, esNuevaLinea = 1;
	while((letra = getchar()) != EOF){
		if(esNuevaLinea && letra == SIGNO_NUMERAL)
		{
			esDirectiva = 1;
			esNuevaLinea = 0;
		}
		else if(letra == SALTO_LINEA)
		{
			if (esDirectiva){
				printf("%c", SALTO_LINEA);
			}
			esNuevaLinea = 1;
			esDirectiva = 0;
		}
		else {
			esNuevaLinea = 0;
		}
		// se imprimen solamente los caracteres que estén dentro de directivas
		if(esDirectiva)
		{
			putchar(letra);
		}
	}
	return 0;
}
