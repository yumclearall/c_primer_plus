#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIM 30

char* s_gets(char* st, int n);

int main(void){
	char number[LIM];
	char* end;
	long value;
	puts("Enter a number (empty line to quit):");
	
	while (s_gets(number, LIM) && number[0] != '\0'){
		value = strtol(number, &end, 10);
		printf("value = %ld	stoped at %s (%d)\n", value, end, *end);
	}
	
	return 0;
}

char* s_gets(char* st, int n){
	int i = 0;
	char* reget;
	reget = fgets(st, LIM, stdin);
	
	if (reget){
		while (reget[i] != '\n' && st[i] != '\0')
			i++;
		if (reget[i] == '\n')
			reget[i] = '\0';
		else
			while (getchar() != '\n');
					
	}
	return reget;
}
