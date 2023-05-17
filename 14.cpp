#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(){
	
	char c;
	char prevChar;
	
	long charsNum = 0;
	int linesNum = 0;
	int wordsNum = 0;
	int uncopmleteLinesNum = 0;
	bool inword = false;
	
	printf("enter a text:\n");
	
	prevChar = '\n';
	
	while ((c = getchar()) != STOP){
		
		charsNum++;
		if(c == '\n'){
			linesNum++;
		}
		if (!isspace(c) && !inword){
			inword = true;
			wordsNum++;
		}
		if (isspace(c) && inword){
			inword = false;
		}
		prevChar = c;
	}
	
	if (prevChar != '\n'){
		uncopmleteLinesNum = 1;
	}
	
	printf("%ld character, %d line, %d words,	%d uncopmleteLine",charsNum,linesNum,wordsNum,uncopmleteLinesNum);
	return 0;
}