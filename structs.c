#include <stdio.h>

// Create struct
struct point {
	int x;
	int y;
};

void main(){
	struct point p1;
	struct point p2 = {7,8};
	p1.x = 3;
	p2.y = 666;
	printf("The coordinates are p1.x=%d y p1.y=%d\n", p1.x, p1.y);
	printf("The coordinates are p2.x=%d y p2.y=%d\n", p2.x, p2.y);
	printf("The sum of x coordinates are: %d", (p1.x+p2.x));

	printf("dir x=%d dir y=%d",&p1.x,&p1.y);
}
