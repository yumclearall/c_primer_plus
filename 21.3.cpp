#include <stdio.h>
#define STLEN 10

char* s_gets(char* st, int n);
int main(){
	char words[STLEN];
	int i;
	//gets_s(words, STLEN);
	
	puts("Enter strings:");
	while (fgets(words , STLEN, stdin) != NULL && words[0] != '\n'){
	
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;
		if (words[i] == '\n')
	
			words[i] = '\0';
		else
			while (getchar() != '\n');
				//丢弃多余字符
		fputs(words, stdout);	
		}	        
	while (s_gets(words, STLEN) && words[0] != '\0');
	return 0;
}

char* s_gets(char* st, int n){
	
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	
	if (ret_val){
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n');
		
	}
	fputs(ret_val, stdout);
	return ret_val;
	
}