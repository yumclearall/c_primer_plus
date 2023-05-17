#include <stdio.h>	//刷x面积需要油罐数
#define COVERAGE 360
int main(){
	
	int cans;
	int sq_feet;
	printf("enter a number:");
	while (scanf("%d",&sq_feet) == 1){
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0:1;
		printf("you need %d %s\n",cans,(cans == 1) ? "can":"cans");
	}
	return 0;
}