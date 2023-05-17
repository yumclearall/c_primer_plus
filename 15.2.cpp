#include <stdio.h>
void uodown(int n){
	printf("%d	%p\n",n,&n);
	if (n < 4){
		uodown(n + 1);
	}
	return;
}
int main(){
	
	int n;
	scanf("%d",&n);
	uodown(n);
	return 0;
}