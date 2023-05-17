#include <stdio.h>
void erjz(int n);
int main(){ 
	int n;
	scanf("%d",&n);
	erjz(n);


	return 0; 
} 

void erjz(int n){
	
	if (n / 2){
		erjz(n / 2);
	}
	printf("%d",n % 2);
	
}