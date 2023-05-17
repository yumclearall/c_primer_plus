#include <stdio.h>
#include <stdlib.h>
//27.2.cpp abc.txt
int main(int argc, char* argv[]){
	
	int ch;
	FILE* fp;
	
	if (argc != 2){
		printf("wrong");
		exit(EXIT_FAILURE);
	}
	
	if ((fp = fopen(argv[1], "w")) == NULL){
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	putc('y', fp);
	
	if(fclose(fp)){
		printf("Error in closing %s\n", argv[1]);
	}
	
	return 0;
}