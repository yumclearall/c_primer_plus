#include <stdio.h>
void buffer(void){
	printf("buffer!\n");
} 
int main(void){
	int num = 1;
	printf("num = %d\n",num);
	int feet,fathoms;
	scanf("%d",&feet);
	fathoms = feet * 6;
	printf("f = %d\n",fathoms);
	buffer();
	return 0;
} 
