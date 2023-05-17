#include <stdio.h>
int main(){
	
	unsigned long num;
	unsigned long div;
	
	bool isprime;
	
	printf("enter a number:");
	
	while (scanf("%lu",&num)){
		if (num <= 1){
			printf("wrong\n");
			return 0;
		}
		for (div = 2,isprime = true;div * div <= num; div++){
			if (num % div == 0){
				if (div * div != num){
					printf("divisibled by %lu and %lu\n",div,num / div);
				}else{
					printf("divisibled by %lu\n",div);
				}
			isprime = false;	
			}	//???????,上行放在这里3出错
		}
		if (isprime){
			printf("%lu is a prime\n",num);
		}
	}
	
	return 0;
}