#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void){
	FILE* fp;
	
	char words[MAX];
	
	if ((fp = fopen("fff.txt", "a+")) == NULL){
		fputs("Can't open \"fff.txt\" file\n", stdout);
		exit(EXIT_FAILURE);
	}
	
	puts("Enter somethings:");
	
	while ((fgets(words, 40, stdin) != NULL) && (words[0] != '#')){
		fprintf(fp, "%s\n", words);
		fflush(fp);
	}
	
	puts("File contents");
	
	rewind(fp);
	
	while (fgets(words, 35, fp) != NULL)
		fputs(words, stdout);
	
	puts("Done");
	
	if(fclose(fp)){
		puts("wrong");
		exit(EXIT_FAILURE);
	}
	
	return 0;
}