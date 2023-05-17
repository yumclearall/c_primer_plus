#include <stdio.h>

union unions{
	int integers;
	char characters;
	double doubles;
};

enum spectrum{
	red,orange,yellow,green,blue,violet
};
const char* colors[] = {
	"red","orange","yellow","green","blue","violet"
}; 

int main(void){
	
	union unions valA;
	valA.characters = 'A';
	
	union unions valB = valA;
	union unions valC = {97};	//初始化第一个成员
	union unions valD = {.doubles = 118.2d};
	
	
	enum spectrum color;
	color = yellow;
	printf("red = %d	yellow = %d\n", red,yellow);
	printf("colors[red] = %s	colors[yellow] = %s\n",colors[red], colors[yellow]);
	
	
	typedef struct room{
		int x;
		int y;
	}ROOM;
	ROOM room1;
	
	
	void ToUpper(char*);
	void ToLower(char*);
	int rounds(double);
	void(* pf)(char*);
	char mis[] = "aaaaa";
	
	pf = ToUpper;
	(*pf)(mis);
	
	pf = ToLower;
	pf(mis);
//	pf = rounds;		wrong
	
	
	return 0;
}