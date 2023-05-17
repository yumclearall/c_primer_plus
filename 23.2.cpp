#include <stdio.h>
//23.2.exe i an superman
int main(int argc, char* argv[]){
	
	int count;
	printf("the command line has %d arguments:\n", argc - 1);	// - 23.2.exe
	
	for (count = 1; count < argc; count++){
		printf("%d:	%s\n", count, argv[count]);
	}
	printf("\n");
	
	return 0;
}