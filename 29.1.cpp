#include <stdio.h>
#include <string.h>

char* s_gets(char* st, int n);

#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100
struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	
	struct book library;
	printf("Plesae enter the book title.\n");
	s_gets(library.title, MAXTITL);
	printf("Plesae enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Plesae enter the value.\n");
	scanf("%f", &library.value);
	
	printf("Now,	library.title = %s library.author = %s library.value = %f\n"
	,library.title, library.author, library.value);
	
	struct book a = {
		"aaaa", "a", 19.0
	};
	printf("Now,	a.title = %s	a.author = %s	a.value = %f\n"
	,a.title, a.author, a.value);
	
	struct book b = {
		.value = 19.0,
		};
		
	while(getchar() != '\n');
	
	struct book lib[MAXBKS];
	int count = 0;
	int index;
	
	printf("\nPlesae enter the book title.\n");
	
	while (count < MAXBKS && s_gets(lib[count].title, MAXTITL) != NULL && lib[count].title[0] != '\0'){
		
		printf("Plesae enter the author.\n");
		s_gets(lib[count].author, MAXAUTL);
		printf("Plesae enter the value.\n");
		scanf("%f", &lib[count].value);
		
		while(getchar() != '\n');
		count++;
		printf("\nPlesae enter the book title.\n");
	}
	
	for (int i = 0; i < count; i++){
		printf("Now,	lib[%d].title = %s	lib[%d].author = %s	lib[%d].value = %f\n"
	, i + 1, lib[i].title, i + 1, lib[i].author, i + 1, lib[i].value);
	}
	puts("Done");
	
	return 0 ;
}

char* s_gets(char* st, int n){
	char* ret_val;
	char* find;
	
	ret_val = fgets(st, n, stdin);
	
	if (ret_val){
		find = strchr(st, '\n');
		if(find){
			*find = '\0';
		}else{
			while (getchar() != '\n');
		}
	}
	
	return ret_val;
}
