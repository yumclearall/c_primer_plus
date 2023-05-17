#include <stdio.h>
#define STLEN 14

int main(){
	
	char words[STLEN];
	
	fgets(words, STLEN, stdin);
	puts(words);
	//fputs(words);
	fputs(words, stdout);
	
	return 0;
}