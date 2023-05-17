#include <stdio.h>
#include <string.h>
//#include "21.3.cpp"
#define LIM 20
#define SIZE 80
#define STOP "quit"
void pit1(const char* string);
char* s_gets(char* st, int n);

int main(){
	
	char input[LIM][SIZE];
	int ct = 0;
	while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0)
		ct++;
	
	printf("%d strings\n", ct);
	
	
	return 0;
}

void pit1(const char* string){
	
	while (*string != '\0'){
		putchar(*string);
	}
}

char* s_gets(char* st, int n){
	
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (st[0] == '\n')
		return NULL;
	if (ret_val){
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n');
		
	}
	//fputs(st, stdout);
	return ret_val;
	
}
