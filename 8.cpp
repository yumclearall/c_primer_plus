#include <stdio.h>
int main(){
	
	int a,c,cout;
	char b[40],d[40];
	scanf("%5d",&a);	//123456
	scanf("%6s",b);
	printf("a = %d\n",a);	//12345
	printf("b = %s\n",b);
	cout = scanf("%dabc%s",&c,d);	//123abcdefgh	²»¹æ·¶ 
	printf("c = %d\nd = %s\ncout = %d\n",c,d,cout);
	
	double day = 1.0,num = 2.0E16,sumday = 64.0,numm = 64.0;
	double sum = 64.0;
	while(day < sumday){
		numm *= 2.0;
		day++;
		sum +=numm;
		printf("daysum = %5.2e\n",sum / num);	
	}
	
	printf("\n%f\n",7.0/4.0);
	
	
	
	return 0;
} 
