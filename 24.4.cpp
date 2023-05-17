#include <stdio.h>

//gcc D:\Desktop\m_c_cpp\text\attachment\24.3.cpp 
//D:\Desktop\m_c_cpp\text\attachment\24.4.cpp 
//-o D:\Desktop\m_c_cpp\text\attachment\part.exe


extern int count;
static int total = 0;

void accumulate(int k);

void accumulate(int k){
	static int subtotal = 0;
	if (k <= 0){
		printf("loop cycle: %d\n", count);
		printf("subtotal: %d	total: %d\n", subtotal, total);
		subtotal = 0;
	}else
	{
		subtotal += k;
		total += k;
	}
}