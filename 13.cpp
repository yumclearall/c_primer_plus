#include <stdio.h>
int main(){
	
	printf("enter a standard:");
	int some;
	scanf("%d",&some);
	
	printf("enter some tempratures:");
	int tem,all_tems,some_tems;
	all_tems = 0;
	some_tems = 0;
	
	while (scanf("%d",&tem) == 1){
		all_tems++;
		if (tem > some){
			some_tems++;
		}
	}
	
	printf("end = %d%%\n",some_tems * 100 / all_tems);
	
	return 0;
} 
