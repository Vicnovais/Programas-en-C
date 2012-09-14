#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rectangulo {
	struct point pt1;
	struct point pt2;
};

void main(){
	struct rectangulo r1;
	struct rectangulo r2 = {{0,0},{4,3}};
	r1.pt1.x = 0;
	r1.pt1.y = 0;
	r1.pt2.x = 4;
	r1.pt2.y = 3;
	printf("el primer punto del rectangulo está en %d y %d\n", 
		r1.pt1.x,r1.pt1.y);
	printf("el segundo punto del rectangulo está en %d y %d\n", 
		r1.pt2.x,r1.pt2.y);
}
