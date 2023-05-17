#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
int main(){
	
	char ch;
	ch = getchar();
	while (ch != '\n'){
		if (ch == SPACE){
			putchar(ch);
		}else{
			putchar(ch + 1);
		}
		
		ch = getchar();
	}
	putchar(ch);
	
	//ch = getchar();
	while ((ch = getchar()) != '\n'){
		if (isalpha(ch)){
			putchar(ch + 1);
		}else{
			putchar(ch);
		}
		//ch = getchar();
	}
	putchar(ch);
	
	return 0;
}