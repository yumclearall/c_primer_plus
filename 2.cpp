#include <stdio.h>
int main(){
	float a,b;
	scanf("%f",&a);
	b = 1700.0 * a * 14.5833;
	printf("num is %.2f\n",b); 
	float ee = 3.16e7;
	printf("%.3f\n",ee);
	int aa = 100;
	printf("%d	%o	%x\n",aa,aa,aa);
	printf("%#o	%#x	%#X\n",aa,aa,aa);
	return 0;
} 
