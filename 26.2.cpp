#include <stdio.h>
#include <stdlib.h>
int main(void){
	
	int max;
	puts("Enter a integer");
	if (scanf("%d", &max) != 1){
		exit(EXIT_FAILURE);
	}
	
	double* ptd;
	ptd = (double*)malloc(max * sizeof(double));
	
	if(ptd == NULL){
		exit(EXIT_FAILURE);
	}
	
//	for (int i = 0; i < max; i++){
//		ptd[i] = 1.0d;
//	}
	int i = 0;
	while (i < max && scanf("%lf", &ptd[i]) == 1)
		i++;
	
	i = 0;
	while (i < max)
		printf("%7.2lf", ptd[i++]);
	
	free(ptd);
	puts("\nDone");
	
	int* ptf;
	ptf = (int*)calloc(max, max * sizeof(int));
	printf("%d\n", ptf[(max - 1) * (max - 1)]);
	free(ptf);
	
	int n = 2, m = 3;
	int(* p2)[6];
	int(* p3)[m];
	int(* p4)[m];
	p2 = (int (*)[6])malloc(n * 6 * sizeof(int));
	p3 = (int (*)[m])malloc(n * m * sizeof(int));
	p4 = (int (*)[m])calloc(n, m * sizeof(int));
	
	free(p2);
	free(p3);
	free(p4);
	
	return 0;
}