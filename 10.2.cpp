#include <stdio.h>
int main(){
	int sum = 0;
	int num,scc;
	scc = scanf("%d",&num);
	while(scc == 1){
		sum += num;
		printf("sum = %d\n",sum);
		scc = scanf("%d",&num);
	}
	printf("scc = %d\n",scc);
	
	return 0;
}
