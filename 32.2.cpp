#include <stdio.h>

#define SQURE(X) X*X
#define SQURE2(X) ((X)*(X))
#define PR(X) printf("%d\n",X)

#define PSQR(X) printf("The squre of "#X" is %d.\n",((X)*(X)))

#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x"#n" = %d\n",x ## n)


#define PRS(X,...) printf("Message "#X": " __VA_ARGS__)

int main(void){
	int x = 5;
	int z;
	z = SQURE(2);		//	2 * 2
	PR(z);
	z = SQURE(x + 2);	//	5 + 2 * 5 + 2
	PR(z);
	PR(100 / SQURE(2));	//	100 / 2 * 2
	PR(SQURE(++x));		//	++x * ++x		//(x = x + 1) * (x = x + 1)
	
	z = 5;
	printf("%d\n", ++z * ++z);
	z = 5;
	printf("%d\n", (z = z + 1) * (z = z + 1));
	
	putchar('\n');
	PSQR(2 + 4);
	
	int XNAME(1) = 14;		//int x1 = 14;
	int XNAME(2) = 20;		//int x2 = 20;
	
	PRINT_XN(1);
	PRINT_XN(2);
	
	return 0;
	
	PRS("Howday");
	PRS(26," %d %s\n",26 ,"string");
}