#include <stdio.h>
#include <limits.h>

#define BYTE_MASK 0xff

char* itobs(int, char*);
void show_bstr(const char*);

int invert_end(int num, int bits);

int main(void){
	
	unsigned long color = 0x002a162f;
	unsigned char blue, green, red;

	red = color & BYTE_MASK;
	green = (color >> 8) & BYTE_MASK;
	blue = (color >> 16) & BYTE_MASK;
	
	
	char bin_str[CHAR_BIT * sizeof(int) + 1];
	int number;
	
	puts("Enter integers and see them in binary.");
	puts("Non-numeric input terminates program.");
	
	while (scanf("%d", &number) == 1){
		itobs(number, bin_str);
		
		printf("	%d is ", number);
		show_bstr(bin_str);
		itobs(invert_end(number, 8), bin_str);
		printf("\n 0xff ^ %d is ", number);
		show_bstr(bin_str);
		
		putchar('\n');
	}
	
	puts("Done");
	return 0;
}

char* itobs(int n, char* ps){
	int i;
	const static int size = CHAR_BIT * sizeof(int);
	
	for (i = size - 1; i >= 0; (i--,n >>= 1)){
		ps[i] = (01 & n) + '0';
	}
	ps[size] = '\0';
	
	return ps;
}

void show_bstr(const char* str){
	int i = 0;
	
	while (str[i]){
		putchar(str[i]);
		if ((++i % 4 == 0) && str[i]){
			putchar(' ');
		}
	}
}

int invert_end(int num, int bits){
	int mask = 0;
	int bitval = 1;
	while(bits-- > 0){
		mask |= bitval;
		bitval <<= 1;
	}
	
	return num ^ mask;
}
