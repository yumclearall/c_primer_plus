#include <stdio.h>
void buffer(char ch,int rows,int cols);
int main(){
	int ch,rows,cols;
	
	while ((ch = getchar()) != '\n'){
		if (scanf("%d%d",&rows,&cols) != 2)	//x确保正确输入
			break;
			
		buffer((char)ch,rows,cols);
				
		while ((ch = getchar()) != '\n')
			continue;
	}
	
	return 0;
}
void buffer(char ch,int rows,int cols){
	
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			putchar(ch);
		}
		putchar('\n');
	}
}