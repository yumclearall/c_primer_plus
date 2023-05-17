#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(){
	
	char c;
	char prevChar = ' ';
	
	long charsNum = 0,charsSum = 0;
	int linesNum = 1;
	int wordsNum = 0;
	
	printf("enter a text:\n");
	
	while ((c = getchar()) != STOP && c != EOF){
		charsSum++;
		if (!isspace(c)){
			charsNum++;
		}
		if (isspace(c) && charsNum){
			wordsNum++;
			if(c == '\n'){
				linesNum++;
				//wordsNum--;
			}
			charsNum = 0;
		}
		prevChar = c;
	}
	if(!isspace(prevChar)){
		wordsNum++;
	}
	printf("%ld character, %d line, %d words",charsSum,linesNum,wordsNum);
	
	return 0;
}