#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 3

struct names{
	char first[40];
	char last[40];
	int age;
};

void showarray(const struct names ar[], int n);

int cmp(const void* pl,const void* p2);

int main(void){
	
	struct names staff[10] = {
		{"jim", "zom", 99	},
		{"jim", "bom", 20	},
		{"alic", "zom", 9	}
	};
	
	puts("Orgin list:");
	showarray(staff, NUM);
	
	qsort(staff, NUM, sizeof(struct names), cmp);
	
	puts("\nSorted list:");
	showarray(staff, NUM);
	
	return 0;
}

void showarray(const struct names ar[], int n){
	int index;
	for (index = 0; index < n; index++){
		printf("%10s%10s%5d\n", ar[index].first, ar[index].last, ar[index].age);
	}
}

int cmp(const void* p1, const void* p2){
	const struct names* ps1 = (const struct names*) p1;
	const struct names* ps2 = (const struct names*) p2;
	
	int res;
	res = strcmp(ps1 -> first, ps2 -> first);
	if (res != 0)
		return res;
	else if ((res = strcmp(ps1 -> last, ps2 -> last)) != 0)
		return res;
	else{
		if (ps1 -> age > ps2 -> age){
			return 1;
		}
		else if (ps1 -> age < ps2 -> age){
			return -1;
		}else{
			return 0;
		}
	}
	
}
