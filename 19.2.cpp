#include <stdio.h>
#define MSG "I'm special"
int main(){
	
	char ar[] = MSG;
	const char*pt = MSG;
	
	printf("address of \"I'm special:	%p	\n\"","I'm special");
	printf("		ar:		%p	\n", ar);
	printf("		pt:		%p	\n", pt);
	printf("		MSG:		%p	\n", MSG);
	printf("address of \"I'm special\":	%p	\n\n","I'm special");
	
	for (int i = 0; i < 6; i++){
		putchar(*(pt + i));
	}
	putchar('\n');
	for (int i = 0; i < 6; i++){
		putchar(*(ar + i));
	}
	putchar('\n');
	
	while (*pt != '\0')
		putchar(*(pt++));
	return 0;
}