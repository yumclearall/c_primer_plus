#include <stdio.h>
#include <string.h>
#define DESS 62.4
#define DEE "you are pup?"
#define pi 3.14159
int main(void){
	float weight,volume;
	int size,letters;
	
	char name[40];
	
	printf("hi,your name?\n");
	
	scanf("%s",&name);
	printf("ok,%s,what's your weight?",name);
	scanf("%f",&weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DESS;
	printf("weight is %4.2f, volume is %2.2f\n",weight,volume);
	printf("size is %d, letters is %d\n",size,letters);
	
	printf("up ,%s\n4pi = %f\n",DEE,(4.0 * pi));
	
	return 0;
} 
