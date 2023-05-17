#include <stdio.h>

void trystat(void);

int Errupt;
double Up[10];
extern char Coal[32];

int main(void){
	
	int count;
	for (count = 1; count < 4; count++){
		
		printf("\nHere comes iteration %d:\n", count);
		trystat();
	}
	
	return 0;
}

void trystat(void){
	
	int fade = 1;
	static int stay = 1;
	
	printf("fade = %d and stay = %d\n", fade++, stay++);
	
}
