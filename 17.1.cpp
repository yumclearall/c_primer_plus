#include <stdio.h>
int main(){
	
	double rates[5] = {88.99, 59.45, 183.11, 340.5};
	const double locked[4] = {0.08, 0.075, 0.0725, 0.07};
	const double* pc = rates;
	pc = locked;
	pc = &rates[3];
	//*pc = 92.9;
	
	double* pnc = rates;
	//pnc = locked;		无效
	pnc = &rates[3];
	
	const double* const pcd = rates;
	//pcd = &rates[2];		不允许
	//*pcd = 92.9;			不允许
	
	int num[3] = {1, 2, 3};
	int nums[4][2] = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};
	//	**nums == *nums[0] == *(&nums[0][0]) == nums[0][0]
	
	printf("num = %p \n&num = %p \n&num[0] = %p \n\n"
	, num, &num, &num[0]);
	printf("nums = %p \nnums[0] = %p \n&nums[0][0] = %p \n\n"
	, nums, nums[0], &nums[0][0]);
	
	printf("nums = %p	nums + 1 = %p\n", nums, nums + 1);
	printf("nums[0] = %p	nums[0] + 1 = %p\n\n"
	, nums[0], nums[0] + 1);
	
	printf("*nums = %p	*nums + 1 = %p\n", *nums, *nums + 1);
	
	printf("nums[0][0] = %d\n", nums[0][0]);
	printf("*nums[0] = %d	**nums = %d\n\n"
	, *nums[0], **nums);
	
	printf("nums[2][1] = %d	*(*(nums + 2) + 1) = %d\n"
	, nums[2][1], *(*(nums + 2) + 1));
	
	return 0;
}