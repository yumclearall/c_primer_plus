#include <stdio.h>
#include <math.h>
int main(){
	
	const double ANSWER = 3.14159;
	double response;
	scanf("%lf",&response);
	while (fabs(response - ANSWER) > 1e-5){//response == ANSWER,²»Í¨¹ı 
		printf("try again\n");
		scanf("%lf",&response);	//3.14159
	}
	printf("%lf\n",response);
	
	int tr,fa;
	tr = (10 > 2);
	fa = (10 == 2);
	printf("te = %d	fa = %d\n",tr,fa);
	
	return 0;
}
