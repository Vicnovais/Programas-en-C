#include <stdio.h>

union nombreUnion {
	int ival;
	float fval;
	char *sval;
} u1;

int main(void)
{
	u1.ival=5;
	printf("u1.ival=%d\t\t&u1.ival=%d\n",u1.ival, &u1.ival);
	u1.fval=3.14;
	printf("u1.fval=%4.4f\t\t&u1.fval=%d\n",u1.fval, &u1.fval);
	u1.sval="hilera";
	printf("u1.sval=%s\t\t&u1.sval=%d\n",u1.sval, &u1.sval);
	
	// union nombreUnion2 {
	// 	int ival;
	// 	float fval;
	// 	char *sval;
	// } u2;
	return 0;
}
