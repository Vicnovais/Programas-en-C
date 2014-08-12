#include <stdio.h>

char *strrchrExamen (char *s, char c)
{
  char *respuesta = 0;
  do {
    if (*s == c)
      respuesta = (char*) s;
  } while (*s++);
  return (respuesta);
}

struct Estudiante {
	char nombre[20];
	char carrera[20];
	int edad;
};

struct Estudiante* mayor(struct Estudiante* a, struct Estudiante* b){
	return (a->edad > b->edad) ? a : b;
}

main(){
	
	int ax;
	scanf("test%d",&ax);
	
	printf("Ejercicio 1:\n");
	char letra = 'm';
	char* hilera = "hola mundo feliz";
	printf("Ultima posición de '%c' dentro de '%s' es %d",letra,hilera,strrchrExamen(hilera,letra)-hilera);	
	printf("\n\n");
	
	printf("Ejercicio 2:\n");
	struct Estudiante a = {"Juan", "ATI", "18"};
	struct Estudiante b = {"Pepe", "Compu", "21"};
	struct Estudiante* estPtr = (struct Estudiante*)mayor(&a, &b);
	printf("El estudiante mayor se llama '%s'",estPtr->nombre);
	printf("\n\n");
	
	char* st="hola";
	printf("%c",st[0]);
	printf("\n\n");
}

/*
Ejercicios de prolog

% ejercicio 5.
i(L,X):-reverse(L,LR),i(LR,[],X).
i([],L,L).
i([H|T],L2,X):-H1 is H+1,i(T,[H1|L2],X).

% ejercicio 6.
indexOf([Elemento|_], Elemento, 0):-!.
indexOf([_|Cola], Elemento, Indice):-indexOf(Cola, Elemento, Indice1), Indice is Indice1+1.

*/


