#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void){	//һЩ��ƥ���ת�� 
	
	short num = PAGES;
	short mnum = -PAGES;
	
	printf("num = %hd	%hu\n",num,num);
	printf("-num = %hd	%hu\n",mnum,mnum);
	printf("num(char) = %d	%c\n",num,num);	//%c��336ȡģ��Ĥ256 
	printf("WORDS... = %d	%hd	%c\n",WORDS,WORDS,WORDS);
	printf("65618 % 2v16 = %d\n",(WORDS % (1 << 9))); 
	
	float n1 = 3.0f;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	printf("\nlongsizeof = %d\n",sizeof(long));
	printf("doublesizeof = %d\n",sizeof(double));
	
	printf("%.1e	%.1e	%.1e	%.1e\n",n1,n2,n3,n4);	//n3��n4��4���ֽ�ȡ8���ֽڣ�ȡ������λ�õ�4�ֽڣ��õ��������� 
	printf("%ld	%ld\n",n3,n4);
	printf("%ld	%ld	%ld	%ld\n",n1,n2,n3,n4);	//�������� 
	// ����Ѵ���ֵ����ջ�У�n1��n2 �ֱ�ռ8�ֽ� ��n3��n4��ռ4�ֽ�
	//  ��ȡʱ���ζ�ȡ4��ld����4�ֽڣ�n3��n4��û�ж�ȡ��  
	
	int bph2o = 212;
	int rv;
	rv = printf("\n%d F is water's boiling piont.\n",bph2o); 
	printf("the printf() fuction printed %d charaters.\n",rv);
	printf("the printf() fuction printed %d charaters.\n"
	,rv);	//�������ַ����м�Ͽ� 
	printf("the printf() fuction \
printed %d charaters.\n",rv);
	printf("the printf() fuction"
	" printed %d charaters.\n",rv);
	
	
	
	return 0;
}
