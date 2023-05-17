#include <stdio.h>
int main(){
	
	char name1[11], name2[11];
	int count;
	
	printf("Please enter 2 names.\n");
	
	count = scanf("%5s %10s", name1, name2);
	
	printf("read %d names	%s and %s", count, name1, name2);
	putchar('\n');
	
	char side_a[] = {"aaaaa"};
	char dont[] = {'w','o','w','!'};
	char side_b[] = "bbbbb";
	
	puts(dont);
	
	puts("Done");
	return 0;
}