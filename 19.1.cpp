#include <stdio.h>
#include <iostream>
#define MSG "I am a superman."
#define MAX_LENGTH 81
using namespace std;
int sum(const int ar[], int n);

int sum2(int x, int y,int ar[][5]);

int main(){
	
	//int *pt1;
	//pt1 = (int []){10, 20};
	
	//int total;
	//total = sum((int []){4,4,4,5,5,5}, 6);		//典型用法
	int x = 2,y = 5;
	int arr[x][y];
	memset(arr,1,sizeof(arr));//数组初始化为1
	//sum2(x,y,arr);
	
	char words[MAX_LENGTH] = "I am a string in a array.";
	const char* pt1 = "Something is pointing at me.";
	puts("Here are some strings:");
	puts(MSG);
	puts(words);
	puts(pt1);
	
	words[8] = 'p';
	puts(words);
	
	printf("\n%s	%p	%c\n", "we", "are", *"familys");
	
	return 0;
}

int sum(const int ar[], int n){
	return 0;
}

int sum2(int x, int y,int ar[][5]){
	return 0;
}
