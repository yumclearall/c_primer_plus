#include <stdio.h>
#define LIM 5
#define SLEN 50
int main(){
	const char* mytalents[LIM] = {
		"Adding numbers swiftly",
		"Multplying accurately", "Stashing data",
		"Following instructions to the letter",
		"Understanding the C language"
	};
	
	for (int i = 0; i < LIM; i++){
		printf("%s\n", mytalents[i]);
	}
	putchar('\n');
	char yourlents[LIM][SLEN] = {
		"Walking in a straight line",
		"Sleeping", "Watching television",
		"Mailing letters", "Reading email"
	};
	for (int i = 0; i < LIM; i++){
		puts(yourlents[i]);
	}
	
	const char* mesg = "Don't be a fool!";
	const char* copy;
	copy = mesg;
	
	putchar('\n');
	puts(copy);
	printf("&mesg = %p	mesg = %p\n", &mesg, mesg);
	printf("&copy = %p	copy = %p\n", &copy, copy);
	
//	char* name;
//	scanf("%s", name);		//wrong
	//printf("%s", name);
	
	char sss[5];		//fsfvsadfsdfs
	scanf("%s", &sss);	//wrong
	puts(sss);
	
	return 0;
}