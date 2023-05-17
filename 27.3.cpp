#include <stdio.h>
#include <stdlib.h>

int main(void){
	int ch;
	FILE* fp;
	fp = fopen("fff.txt", "r");
	
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	
	fclose(fp);
	
	return 0;
}