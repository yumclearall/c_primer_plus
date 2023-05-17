#include <stdio.h>
int main(){
	short num1 = 1e1;
	int num2 = 1e3;
	long num3 = 1e9;
	long long num4 = 1e11;
	printf("num1 = %hd	num2 = %d\n",num1,num2);
	printf("num3 = %ld	num4 = %lld\n",num3,num4);
	printf("s1 = %d	s2 = %d\n",sizeof(num1),sizeof(num2));
	printf("s3 = %d	s4 = %d\n",sizeof(num3),sizeof(num4));
	printf("num1(o) = %ho	num2(o) = %o\n",num1,num2);
	printf("num3(x) = %lx	num4(x) = %llx\n",num3,num4);
	
	unsigned short int num5 = -1e5;
	printf("num5 = %d	s5 = %d\n",num5,sizeof(num5));
	unsigned num6 = 1e6;
	
	long num7 = 33L;
	long long num8 = 33LL;
	unsigned long long num9 = 33ULL;
	
	int i = 2147483647;
	unsigned int j = 4294967295;
	printf("%d	%d	%d\n",i,i + 1,i + 2);
	printf("%u	%u	%u\n",j,j + 1,j + 2);
	
	unsigned int un = 3000000000;//在unsigned范围内，不在int范围内 
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	printf("short = %dbyte	int = %dbyte\nlong = %dbyte	long long = %dbyte\n",sizeof(short),sizeof(int),sizeof(long),sizeof(long long));
	
	printf("\n");
	printf("un = %u,and not %d\n",un,un);
	printf("end = %hd,and not %d\n",end,end);
	printf("big = %ld,and not %hd\n",big,big);
	printf("verybig = %lld,and not %ld\n",verybig,verybig);
	
	printf("\n%d\n",sizeof(char)); 
	
	char ch ='\\',cn = '\'';//存反斜杠和单引号 
	printf("ch = %c	cn = %c\n",ch,cn); 
	printf("Gramps sez,\"a \\ is a backslash\"\n");
	
	printf("\n");
	char mm1 = '\067',mm2 = '\x043';
	printf("mm1 = %c	mm2 = %c\n",mm1,mm2);
	printf("Hello!\007\n");//蜂鸣 
	return 0;
} 
