#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20

void stsrt(char* strings[], int num);
char* s_gets(char* st, int n);

int main(){
	
	printf("%d\n", strcmp("p", "pd"));
	
	char last[20] = "aaaaa";
	char formal[42];
	char first[20] = "bbbbb";
	sprintf(formal, "%s%s", first, last);
	puts(formal);
	
	
	char input[LIM][SIZE];
	char* ptstr[LIM];
	
	int ct = 0;
	int k;
	
	while (ct < LIM && s_gets(input[ct], SIZE) != NULL){
		ptstr[ct] = input[ct];
		ct++;
	}
	
	stsrt(ptstr, ct);
	for (int i = 0; i < ct; i++){
		puts(ptstr[i]);
	}
	return 0;
}

void stsrt(char* strings[], int num){
	char* temp;
	int top,seek;
	for (top = 0; top < num - 1; top++){
		for (seek = top + 1; seek < num; seek++){
			if (strcmp(strings[top], strings[seek]) > 0){
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			}
		}
	}
}

char* s_gets(char* st, int n){
	
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (st[0] == '\n')
		return NULL;
	if (ret_val){
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n');
		
	}
	//fputs(st, stdout);
	return ret_val;
	
}