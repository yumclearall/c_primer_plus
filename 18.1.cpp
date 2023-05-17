#include <stdio.h>
int sum(int a[], int n);
int main(){
	
	int p = 1;
	int* p1 = &p;
	int** p2 = &p1;
	//int* p3 = p2;
	
	printf("&p = %p\n", &p);
	printf("&p1 = %p\n", &p1);
	printf("&p2 = %p\n\n", &p2);
	
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n\n", p2);
	
	printf("*p1 = %d\n", *p1);
	printf("*p2 = %p\n", *p2);
	printf("**p2 = %d\n", **p2);
	
	
	int x = 20;
	const int y = 23;
	int* pp1 = &x;
	const int* pp2 = &y;
	const int** pp3;
	
//	pp1 = pp2;	//不安全，非const不能赋值const
	pp2 = pp1;
//	pp3 = &pp1;	//不安全	嵌套指针类型赋值
	pp3 = &pp2;//int和int*都为const才可
	
	
	int xp[3][4];
	int sum_nums = 0; 
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			xp[i][j] = (i + 1) * (j + 1);
		//	xp[i][j] = i * j;
		}
	} 
	for (int i = 0; i < 3; i++){
		sum_nums += sum(xp[i],4);
	}
	
	printf("sum_nums = %d\n", sum_nums);
	
	return 0;
}

int sum(int a[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
	}
	return sum;
	
}