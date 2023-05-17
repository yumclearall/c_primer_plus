#include <stdio.h>

void report_count(void);
void accumulate(int k);

int count = 0;

int main(void){
	
	int value;
	register int i;
	printf("Enter a positive integer:");
	
	while (scanf("%d", &value) == 1 && value > 0){
		
		++count;
		for (i = value; i >= 0; i--){
			accumulate(i);
		}
		printf("Enter a positive integer:");
	}
	
	report_count();
	
	return 0;
}

void report_count(void){
	printf("Loop executed %d times\n", count);
}