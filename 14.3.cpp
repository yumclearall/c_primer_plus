#include <stdio.h>
int main(){
	const float MIN = 0.0f;
	const float MAX = 100.0f;
	
	float score;
	
	float total = 0.0f;
	
	float min = MIN;
	float max = MAX;
	
	int n = 0;
	
	printf("enter a score:");
	
	while (scanf("%f",&score) == 1){
		if (score < MIN || score > MAX){
			printf("wrong!\n");
			continue;
		}
		printf("Accepting %0.1f:\n",score);
		min = ((score < min) || min == 0.0) ? score:min;
		max = ((score > max) || max == 100.0) ? score:max;
		total += score;
		n++;
	}
	if (n > 0){
		printf("averae of %d,is %0.1f.\n",n,total / n);
		printf("low = %0.1f	high = %0.1f\n",min,max);
	}
	
	return 0;
}