#include <stdio.h>
int main(void){
	
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf("n = %d	intsize = %zd\n",n,intsize);
	
	typedef double dl;
	dl a = 3.5e-1;
	printf("\n%.2f\n",a);
	
	int num = 5;
	while(num < 10){
		printf("%10d%10d\n",num,num * num++);
	}
	
	return 0;
}
