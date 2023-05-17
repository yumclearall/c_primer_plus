#include <stdio.h>
void proud(int n);
int main(){
	int q;
	printf("返回值1 ： %d\n",(q = 3 + 4));
	printf("返回值2 ： %d\n",(3 < 4));
	
	;;;;;
	
	char ch;
	int i;
	float fl;
	fl = i = ch = 'C';
	printf("ch = %c	i = %d	fl = %2.2f\n",ch,i,fl);
	
	ch++;
	i = fl + 2 * ch;
	fl = 2.0 * ch + i;
	printf("ch = %c	i = %d	fl = %2.2f\n",ch,i,fl);
	
	ch = 1107;//溢出。%256,
	printf("ch = %c\n",ch);
	
	ch = 80.89;
	printf("ch = %c\n",ch);
	
	int hh,hhh;
	scanf("%d%d",&hh,&hhh);	//34.5
	printf("%d %d\n\n",hh,hhh); 
	
	char chh = '!';//33
	float f = 6.0;
	int times = 5;
	proud(times);
	proud(f);
	proud(chh);
	
	
	
	return 0;
} 

void proud(int n){
	while(n--)
		printf("#");
	printf("\n");
}
