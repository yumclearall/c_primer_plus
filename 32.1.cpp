#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define BLUE 4
#define GREEN 2
#define RED 1

#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CTAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)


#define OPAQUE 		0x1
#define FILL_BLUE	0x8
#define FILL_GREEN	0x4
#define FILL_RED	0x2
#define FILL_MASK	0xE

#define BORDER			0x100
#define BORDER_BLIE		0x800
#define BORDER_GREEN 	0x400
#define BORDER_RED		0x200
#define BORDER_MASK		0xE00

#define B_SOLID		0
#define B_DOTTED	0x1000
#define B_DASHED	0x2000
#define STYLE_MASK	0x3000


const char* colors[8] = {
	"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"
};

struct box_props{
	bool opaque : 				1;
	unsigned int fill_color : 	3;
	unsigned int : 				4;
	bool show_border : 			1;
	unsigned int border_color : 3;
	unsigned int border_style : 2;
	unsigned int : 				2;
};

union Views{
	struct box_props st_view;
	unsigned short us_view;
};

void show_settings(const struct box_props* pb);
void show_setting1(unsigned short);

char* itobs(int n, char* ps);

int main(void){
	struct box_props box0 = {	true, YELLOW, true, GREEN, DASHED
	};
	
	printf("Original box0 settings:\n");
	show_settings(&box0);
	
	box0.opaque = false;
	box0.fill_color = WHITE;
	box0.border_color = MAGENTA;
	box0.border_style = SOLID;
	
	printf("\nModified box0 settings:\n");
	show_settings(&box0);
	
	printf("\n\n");
	
	
	
	union Views box = {
	{	true, YELLOW, true, GREEN, DASHED	}
	};
	
	char bin_str[8 * sizeof(unsigned int) + 1];
	
	printf("Original box settings:\n");
	show_setting1(box.us_view);
	
	printf("bits are %s\n", itobs(box.us_view, bin_str));
	
	box.us_view &= ~FILL_MASK;
	box.us_view |= (FILL_BLUE | FILL_GREEN);
	box.us_view ^= OPAQUE;
	box.us_view |= BORDER_RED;
	box.us_view &= ~STYLE_MASK;
	box.us_view |= B_DOTTED;
	
	printf("\nModified box setting1:\n");
	show_setting1(box.us_view);
	printf("bits are %s\n", itobs(box.us_view, bin_str));
	
	return 0;
}

void show_settings(const struct box_props* pb){
	printf("Box is %s.\n", pb -> opaque == true ? "opaque" : "transparent");
	printf("The fill color is %s.\n", colors[pb -> fill_color]);
	printf("Border %s.\n", pb -> show_border == true ? "shown" : "not shown");
	printf("The border color is %s.\n", colors[pb -> border_color]);
	printf("The border style is ");
	switch(pb -> border_style){
		case SOLID:
			printf("solid.\n");
			break;
		case DASHED:
			printf("dashed.\n");
			break;
		case DOTTED:
			printf("dotted.\n");
			break;
		default:
			printf("unkown type.\n");
	}
	
}

void show_setting1(unsigned short us){
	printf("Box is %s.\n", (us & OPAQUE) == true ? "opaque" : "transparent");
	printf("The fill color is %s.\n", colors[us >> 1 & 07]);
	printf("Border %s.\n", (us & BORDER) == true ? "shown" : "not shown");
	printf("The border color is %s.\n", colors[us >> 9 & 07]);
	printf("The border style is ");
	switch(us & STYLE_MASK){
		case B_SOLID:
			printf("solid.\n");
			break;
		case B_DASHED:
			printf("dashed.\n");
			break;
		case B_DOTTED:
			printf("dotted.\n");
			break;
		default:
			printf("unkown type.\n");
	}
}

char* itobs(int n,char* ps){
	int i;
	const static int size = CHAR_BIT * sizeof(int);
	for (i = size - 1; i >= 0; i--, n >>= 1){
		ps[i] = (01) & n + '0';
	}
	
	ps[size] = '\0';
	return ps;
}
