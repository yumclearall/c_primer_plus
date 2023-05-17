#include <stdio.h>
#define STLEN 10
int main(){
	
	char words[STLEN];
	char word[STLEN];
	
	puts("Enter strings:");
	while (fgets(words , STLEN, stdin) != NULL && words[0] != '\n'){
		fputs(words, stdout);
		//puts(words);
		//while (getchar()  != '\n')
			//continue;		//丢弃多余字符
	}
	
	//word[0] = *(fgets(words , STLEN, stdin));
	//puts(word);
	
	return 0;
}