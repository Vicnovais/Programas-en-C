#include <stdio.h>

struct point {
	int x;
	int y;
};

void main(){
	struct point origen, *ptr;
	ptr = &origen; 
	origen.x = 3;
	origen.y = 4;
	printf("origen is (%d,%d)\n", ptr->x, ptr->y);
}

