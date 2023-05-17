#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(){
	
	double distk,distm;
	double rate;
	int min,sec;
	int time;
	double mtime;
	int mmin,msec;
	printf("balabala¡­¡­\n");
	scanf("%lf%d:%d",&distk,&min,&sec);	//10 36:23
	time = S_PER_M * min + sec;
	distm = M_PER_K * distk;
	rate = distm / time * S_PER_H;
	mtime = (double)time / distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;
	printf("%1.2fkm (%1.2fmiles) in %dmin,%dsec\n"
	,distk,distm,min,sec);
	printf("a mile in %dmin,",mmin);
	printf("%dsec	%1.2fmph\n",msec,rate);
	
	
	return 0;
} 
