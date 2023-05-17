#include <stdio.h>
#include "hotel.h"
//	D:\new aa\Dev-Cpp\TDM-GCC-64\bin	目录下文件位置处输入cmd打开操作系统
/*	gcc.exe D:\Desktop\\"c&&c++"\\"笔记本"\\"附件"\usehotel.cpp 
D:\Desktop\\"c&&c++"\\"笔记本"\\"附件"\hotel.cpp 
-o D:\Desktop\\"c&&c++"\\"笔记本"\\"附件"\myhotel.exe		*/
//	cd D:\Desktop\\"c&&c++"\\"笔记本"\\"附件"
//	myhotel.exe
int main(void){
	
	int nights;
	double hotel_rate;
	
	int code;
	
	while ((code = menu()) != QUIT){
		
		switch(code){
			case 1:
				hotel_rate = HOT1;
				break;
			case 2:
				hotel_rate = HOT2;
				break;
			case 3:
				hotel_rate = HOT3;
				break;
			case 4:
				hotel_rate = HOT4;
				break;
			default:
				hotel_rate = 0.0;
				printf("Oops!\n");
				break;
		}
		nights = getnights();
		showprice(hotel_rate,nights);
	}
	printf("thankyou and goodbye\n");
	
	
	
	
	
	return 0;
}