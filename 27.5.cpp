#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void){
	FILE* fp;
	
	char words[MAX];
	
	if ((fp = fopen("fff.txt", "a+")) == NULL){
		fprintf(stdout, "Can't open \"fff.txt\" file\n");
		exit(EXIT_FAILURE);
	}
	
	puts("Enter somethings:");
	
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')){
		fprintf(fp, "%s\n", words);
		fflush(fp);
	}
	
	puts("File contents");
	
	rewind(fp);
	
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	
	puts("Done");
	
	fclose(fp);
	
	return 0;
}