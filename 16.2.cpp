#include <stdio.h>
void interchange(int *u, int *v);

int sum(int a[], int n);
int main(){
	
	int num = 10;
	int* p = &num;
	printf("num= %d	&num = %p\n*p = %d\n", num, p,*p);
	
	int x = 5, y = 10;
	printf("x = %d	y = %d\n", x, y);
	interchange(&x, &y);
	printf("x = %d	y = %d\n", x, y);
	
	int a[10];
	printf("%zd	%zd	%d\n", sizeof(a), sizeof(a[0]), sizeof(a) / sizeof(a[0]));
//	int a[10] = {[7] = 212};
//	printf("a[7] = %d\n", a[7]);
	
	int dates[5];
	for (int i = 0; i < 5; i++){
		dates[i] = i + 1;
		printf("%d	", *(dates + i));
	}
	
	printf("\nsum(dates) = %d\n",sum(dates,5));
	printf("sizeof(int*) = %d\n",sizeof(int*));
	return 0;
}

void interchange(int *u, int *v){
	int t;
	t = *u;
	*u = *v;
	*v = t;
}

int sum(int a[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
	}
	return sum;
}