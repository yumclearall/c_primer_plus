#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define NDEBUG

#define LLL
#define LIMIT 400
#undef LIMIT
#line 6 "32.3.cpp"
void why_me();

int main(void){
	
	#ifndef LIMIT
//		#error Not LIMIT
	#else
		printf("yeap!");
	#endif
	
	
	printf("The file is %s.\n", __FILE__);
	printf("The date is %s.\n", __DATE__);
	printf("The time is %s.\n", __TIME__);
//	printf("The verrson is %ld.\n", __STDC_VERSION__);
	printf("This is line %d.\n", __LINE__);
	printf("The function is %s.\n", __func__);
	why_me();
	
		assert (3 > 4);
	return 0;
}

void why_me(){
	printf("The function is %s.\n", __func__);
	printf("This is line %d.\n", __LINE__);
}
