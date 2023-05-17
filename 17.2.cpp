#include <stdio.h>
int main(){
	
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
	
	int* pzd[2];
	
	pzd[0] = zippo[0];
	pzd[1] = zippo[1];
	
	printf("pzd[0] = %p	pzd[1] = %p\n\n", pzd[0], pzd[1]);
	
	int(* pz)[2];
	pz = zippo;
	
	printf("pz = %p	pz + 1 = %p\n\n", pz, pz + 1);
	
	printf("pz[0] = %p	pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
	printf("*pz = %p	*pz + 1 = %p\n\n", *pz, *pz + 1);
	
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("*pz[0] = %d\n", *pz[0]);
	printf("**pz = %d\n\n", **pz);
	
	printf("*pz[1] = %d\n", *pz[1]);
	printf("(*pz)[1] = %d\n\n", (*pz)[1]);
	
	printf("pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));
	
	
	
	int n = 5;
	double x = 1.2d;
	int * pl = &n;
	double* pd = &x;
	x = n;	//隐式类型转换
	//pd = pl;		编译时错误
	
	return 0;
}