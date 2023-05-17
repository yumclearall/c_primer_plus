#include <stdio.h>
int main(){
	int num[5] = {100,200,300,400,500};
	
	int* ptr1;
	int* ptr2;
	int* ptr3;
	
	ptr1 = num;	//把数组角标为0的元素地址，赋值给指针，等价于ptr1 = &num[0];
	printf("ptr1 = num\n");
	
	ptr2 = &num[2];	//把一个地址赋值给指针
	printf("ptr2 = &num[2];\n");
	
	printf("ptr1 = %p,	*ptr1 = %d,	&ptr1 = %p\n"
	, ptr1, *ptr1, &ptr1);
	printf("ptr2 = %p,	*ptr2 = %d,	&ptr2 = %p\n"
	, ptr2, *ptr2, &ptr2);
	
	ptr3 = ptr1 + 4;	//指针加法
	printf("\nptr3 = ptr1 + 4;	&ptr3 = %p\n", &ptr3);
	printf("ptr1 + 4 = %p,	*(ptr1 + 4) = %d\n"
	, ptr1 + 4, *(ptr1 + 4));
	
	ptr1++;	//指针递增
	printf("\nptr1++;\n");
	printf("ptr1 = %p,	*ptr1 = %d,	&ptr1 = %p\n"
	, ptr1, *ptr1, &ptr1);
	
	ptr2--;	//指针递减
	printf("\nptr2--;\n");
	printf("ptr2 = %p,	*ptr2 = %d,	&ptr2 = %p\n"
	, ptr2, *ptr2, &ptr2);
	
	ptr1--;		//恢复为初始值
	ptr2++;
	printf("\nptr1++;	ptr2--;\n");
	printf("ptr1 = %p,	ptr2 = %p\n"
	, ptr1, ptr2);
	
	//一个指针减去另一个指针
	printf("\nptr1 = %p,	ptr2 = %p		p2-p1 = %td\n"
	, ptr1, ptr2, ptr2 - ptr1);
	printf("&p2-&p1 = %td\n"
	,&ptr2 - &ptr1);
		//一个指针减去一个整数
	printf("\nptr3 = %p,	p3-2 = %p\n"
	, ptr3, ptr3 - 2);
	printf("&ptr3 = %p,	&p3-2 = %p\n"
	, &ptr3, &ptr3 - 2);
	
	printf("\np1 = %p\np2 = %p\np3 = %p\n"
	, &ptr1, &ptr2, &ptr3);
	printf("p3-p2 = %td,	p3-p1 = %td\n"
	, ptr3 - ptr2, ptr3 - ptr1);
	
	return 0;
}