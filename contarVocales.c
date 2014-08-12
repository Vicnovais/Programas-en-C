#include <stdio.h> 

void leslie(char* s, char* t){
	while(*s!='\0'){
		s++;
	}
	while(*s++ = *t++){
		;
	}
}

void frank(char* s, char* t){
	int len = strlen(s), i;
	for(i = 0; i < strlen(t); ++i)
	{
		s[i+len] = t[i];
	}
}

main(){
	char s[20] = "hola";
	char t[30] = "adios";
	printf("s=%s, t=%s\n",s,t);
	frank(s, t);
	printf("s=%s, t=%s\n",s,t);
}



// main(){
// 	int letra, contador;
// 	contador = 0;
// 	
// 	while((letra = getchar()) != EOF){
// 		if (isalpha(letra)){
// 			++contador;
// 		}
// 	}
// 	printf("Numero de letras leídas: %d\n", contador);
// }
