#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void){	//一些不匹配的转换 
	
	short num = PAGES;
	short mnum = -PAGES;
	
	printf("num = %hd	%hu\n",num,num);
	printf("-num = %hd	%hu\n",mnum,mnum);
	printf("num(char) = %d	%c\n",num,num);	//%c对336取模，膜256 
	printf("WORDS... = %d	%hd	%c\n",WORDS,WORDS,WORDS);
	printf("65618 % 2v16 = %d\n",(WORDS % (1 << 9))); 
	
	float n1 = 3.0f;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	printf("\nlongsizeof = %d\n",sizeof(long));
	printf("doublesizeof = %d\n",sizeof(double));
	
	printf("%.1e	%.1e	%.1e	%.1e\n",n1,n2,n3,n4);	//n3，n4，4个字节取8个字节，取到附近位置的4字节，得到无意义数 
	printf("%ld	%ld\n",n3,n4);
	printf("%ld	%ld	%ld	%ld\n",n1,n2,n3,n4);	//参数传递 
	// 程序把传入值放入栈中，n1，n2 分别占8字节 ，n3，n4，占4字节
	//  读取时依次读取4个ld，即4字节，n3，n4，没有读取到  
	
	int bph2o = 212;
	int rv;
	rv = printf("\n%d F is water's boiling piont.\n",bph2o); 
	printf("the printf() fuction printed %d charaters.\n",rv);
	printf("the printf() fuction printed %d charaters.\n"
	,rv);	//不能在字符串中间断开 
	printf("the printf() fuction \
printed %d charaters.\n",rv);
	printf("the printf() fuction"
	" printed %d charaters.\n",rv);
	
	
	
	return 0;
}
