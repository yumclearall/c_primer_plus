#include <stdio.h>

struct{
	unsigned int autfd : 1;
	unsigned int bldfc : 1;
	unsigned int undln : 1;
	unsigned int itals : 1;
}prnt;

struct box_props{
	bool opaque : 				1;
	unsigned int fill_color : 	3;
	unsigned int : 				4;
	bool show_border : 			1;
	unsigned int border_color : 3;
	unsigned int border_style : 2;
	unsigned int : 				2;
};

int main(void){
	
	
	
	return 0;
}