#include <stdio.h>	//fff.txt
#include <stdlib.h>
int main(){
	
	int ch;
	FILE *fp;
	
	char fname[50];
	printf("enter a name of file:\n");
	scanf("%s",fname);
	
	fp = fopen(fname,"r");	//x打开带读取文件
	if (fp == NULL){	//x如果失败
		printf("bye\n");
		exit(1);
	}
	//getc(fp)从打开的文件中获取一个字符
	
	while ((ch = getc(fp)) != EOF){
		putchar(ch);
	}
	fclose(fp);	//x关闭文件
	
	return 0;
}