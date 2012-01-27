#include <stdio.h>

main()
{
	int a, b;
	a = 5;
	b = ++a + 5;
	printf("a=%d b=%d",a,b);
	getchar();
	
	int x,y;
	x = 5;
	y = x++ + 5;
	printf("x=%d y=%d",x,y);
	printf("\n"); 
}