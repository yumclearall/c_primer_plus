#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#define DENSITY 62.4	//人体密度 
#define BLURB "Authentic imitation!"
int main(){
	const float pi = 3.1415f;
	float n = 5,m = pi * n;
	printf("m = %.2f\n",m);
	
	printf("\nintmax = %d\n",INT_MAX);	//最大整型 
	printf("longlongmin = %lld\n",LLONG_MIN);	// 
	printf("onebyte(char) = %d\n",CHAR_BIT);	//
	printf("double = %e\n",DBL_MAX);	//
	printf("smallestnormalfloat = %e\n",FLT_MIN);	//
	printf("floatprecision = %d digits\n",FLT_DIG);	//
	printf("floatepsilon = %e\n",FLT_EPSILON);	//
	
	const int PGR = 956;
	printf("\n*%d*\n",PGR);
	printf("*%2d*\n",PGR);
	printf("*%10d*\n",PGR);
	printf("*%-10d*\n",PGR);
	
	const double RENT = 3852.99;
	printf("\n*%f*\n",RENT);
	printf("*%4.2f*\n",RENT);
	printf("*%3.1f*\n",RENT);
	printf("*%10.3f*\n",RENT);
	printf("*%10.3e*\n",RENT);
	printf("*%+4.2f*\n",RENT);
	printf("*%010.2f*\n",RENT);
	
	printf("\n%x	%X	%#x\n",31,31,31);
	printf("*%d*% d*% d*\n",42,42,-42);
	printf("*%5d*%5.3d*%05d*%05.3d*\n\n",6,6,6,6);
	
	printf("strlen = %zd\n",sizeof(BLURB) - 1);//sizeof读取\n 
	printf("[%2s]\n",BLURB);
	printf("[%24s]\n",BLURB);
	printf("[%24.5s]\n",BLURB);
	printf("[%-24.5s]\n",BLURB);
		
	return 0;
} 
