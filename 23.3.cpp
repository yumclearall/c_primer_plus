#include <stdio.h>
#include <stdlib.h>	//23.3.exe 3times

int main(int argc, char* argv[]){
	
	int i, times;
	
	printf("argc = %d\n", argc);
	if(argc < 2 || (times = atoi(argv[1])) < 1){
		printf("Usage: %s positive-number\n", argv[0]);
	}
	else{
		for (i = 0; i < times; i++){
			puts("Hellow, good looking!");
		}
	}
	
	return 0;
}