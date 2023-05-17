#include <stdio.h>
#include <string.h>
#define NLEN 30

struct namect{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};



void getinfo1(struct namect*);
void makeinfo1(struct namect*);
void showinfo1(const struct namect*);

struct namect getinfo2(void);
struct namect makeinfo2(struct namect);
void showinfo2(struct namect);

char* s_gets(char* st, int n);

int main(void){
	struct namect person1;
	
	getinfo1(&person1);
	
	makeinfo1(&person1);
	
	showinfo1(&person1);
	
	
	struct namect person2;
	
	person2 = getinfo2();
	
	person2 = makeinfo2(person2);
	
	showinfo2(person2);
		
	return 0;
}

void getinfo1(struct namect* pst){
	printf("Please enter your firat name.\n");
	s_gets(pst -> fname, NLEN);
	
	printf("Please enter your last name.\n");
	s_gets(pst -> lname, NLEN);
}

void makeinfo1(struct namect* pst){
	pst -> letters = strlen(pst -> fname) + strlen(pst -> lname);
}

void showinfo1(const struct namect* pst){
	printf("%s %s, your name contains %d letters.\n"
	, pst -> fname, pst -> lname, pst -> letters);
}



struct namect getinfo2(void){
	struct namect pst;
	
	printf("Please enter your firat name.\n");
	s_gets(pst.fname, NLEN);
	
	printf("Please enter your last name.\n");
	s_gets(pst.lname, NLEN);
	
	return pst;
}
struct namect makeinfo2(struct namect pst){
	pst.letters = strlen(pst.fname) + strlen(pst.lname);
	
	return pst;
}
void showinfo2(struct namect pst){
	printf("%s %s, your name contains %d letters.\n"
	, pst.fname, pst.lname, pst.letters);
}

char* s_gets(char* st, int n){
	
	char* ret_val;
	char* find;
	
	ret_val = fgets(st, n, stdin);
	if(ret_val){
		find = strchr(st, '\n');
		if (find){
			*find = '\0';
		}
		else
			while (getchar() != '\n');
	}
	
	return ret_val;
}