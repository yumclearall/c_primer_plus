#include <stdio.h>
void mikado(int);

int main(void){
	
	int pooth = 2,bah = 5;
	
	printf("main()\npooth = %d	&pooth = %p\n", pooth, &pooth);
	printf("bah = %d		&bah = %p\n\n", bah, &bah);
	
	mikado(pooth);
	
	return 0;
}

void mikado(int bah){
	
	int pooth = 10;
	
	printf("mikado()\npooth = %d	&pooth = %p\n", pooth, &pooth);
	printf("bah = %d		&bah = %p\n", bah, &bah);
}