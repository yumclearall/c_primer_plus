#include <stdio.h>

int main(void){
	//auto int plox;
	int a = 5;		//原始a
	printf("a1 = %d	&a1 = %p\n",a , &a);
	{
		int a = 9;		//新的a，隐藏了原来的a
		printf("a2 = %d	&a2 = %p\n",a , &a);
	}
	printf("a1 = %d	&a1 = %p\n\n",a , &a);
	while (++a < 9){
		int a = 20;		//新的a，隐藏了原来的a
		a++;
		printf("a3 = %d	&a3 = %p\n",a , &a);
	}
	printf("a1 = %d	&a1 = %p\n",a , &a);
	
	register int quick;
	
//	for (int a = 1; a < 4; a++){
//		printf("a4 = %d	&a4 = %p\n",a , &a);
//		int a = 4;
//		printf("a5 = %d	&a5 = %p\n",a , &a);
//	}
	return 0;
}