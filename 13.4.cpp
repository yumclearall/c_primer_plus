#include <stdio.h>
bool isprime(unsigned long num);
int main(){
	
	unsigned long num;
	unsigned long div;
	
	printf("enter a number:");
	
	while (scanf("%lu",&num)){
		if (num <= 1){
			printf("wrong\n");
			return 0;
		}
		if (isprime(num)){
			printf("%lu is a prime\n",num);
		}
	}
	
	return 0;
}

bool isprime(unsigned long num){
	unsigned long div;
	bool judge;
	for (div = 2,judge = true;div * div <= num; div++){
			if (num % div == 0){
				if (div * div != num){
					printf("divisibled by %lu and %lu\n",div,num / div);
				}else{
					printf("divisibled by %lu\n",div);
				}
				judge = false;
			}
		}
	return judge;
}