#include <stdio.h>
#define SIZE 10
int sump(int* start, int* end);
int main(){
	
	int a[10];
	for (int i = 0; i < SIZE; i++){
		a[i] = i + 1;
	}
	printf("sum = %d\n", sump(a, a + SIZE));
	
	int data[2] = {100,200};
	int moredata[2] = {300,400};
	
	int* p1,* p2,* p3;
	p1 = p2 = data;
	p3 = moredata;
	printf("	*p1 = %d	*p2 = %d	*p3 = %d\n", *p1, *p2, *p3);
	printf("	*p1++ = %d	*++p2 = %d	(*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf("	*p1 = %d	*p2 = %d	*p3 = %d\n", *p1, *p2, *p3);
	
	return 0;
}

int sump(int* start, int* end){
	int total = 0;
	while (start < end){
		total += *start;
		start++;
	}
	return total;
}