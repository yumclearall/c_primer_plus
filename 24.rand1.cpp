#include <stdio.h>
#include <time.h>

//gcc D:\Desktop\m_c_cpp\text\attachment\24.rand1.cpp 
//D:\Desktop\m_c_cpp\text\attachment\24.rand.cpp 
//-o D:\Desktop\m_c_cpp\text\attachment\rand0.exe

extern unsigned int rand0(void);
extern void srand(unsigned int x);

int main(){
	
	int count;
	unsigned seed;
	
//	while (scanf("%u", &seed) == 1){
//		srand(seed);
//		for (count = 0; count < 5; count++)
//			printf("%d\n", rand0());
//	
//	}

	srand((unsigned int)time(0));
	for (count = 0; count < 5; count++)
		printf("%d\n", rand0());

	printf("Done\n");
	return 0;
}