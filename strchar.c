#include <stdio.h>

char *Mystrchr (char * s, char c ){
	while (*s!=c)
		if (*s++==NULL) // igual que poner '\0'
			return NULL;
	return s;
}

int main(){
	char caracter = 'z';
	char* hilera = "hola mundo feliz";
	printf ("Buscando '%c' en \"%s\"...\n",caracter,hilera);
	char* ubicacion = Mystrchr(hilera, caracter);
	if (ubicacion!=NULL){
		printf ("'%c' se encuentra en la posición %d de \"%s\"\n",caracter, ubicacion-hilera, hilera);
	}
	else{
		printf ("'%c' no se encuentra en \"%s\"\n", caracter, hilera);
	}
	return 0;
}