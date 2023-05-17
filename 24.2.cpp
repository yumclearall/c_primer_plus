#include <stdio.h>

int Hocus;
int magic1(void);
int magic2(void);

int main(void){
	
	//extern int Hocus;
	
	int Hocus;
	
	return 0;
}

int magic1(){
	
	extern int Hocus;
	
	return Hocus;
}

int magic2(){
	
	//int Hocus;
	
	return Hocus;
}