#include <stdio.h>
int main(void){
	
	printf("f = %d	d = %d	ld = %d\n",sizeof(float),sizeof(double),sizeof(long double));
	
	float planck = 32000.0;
	//long double��c99��׼���ܶ���������ܲ����㣻
	long double gnp = 5.32e-5;
	double pnk = 2.14e9;
	printf("pl = %f	pn = %f	gn = %lf\n",planck,pnk,gnp);
	//��ѧ������ 
	printf("pl(e) = %e\npn(e) = %e\ngn = %le\n",planck,pnk,gnp);
	//ʮ������
	printf("pl(a) = %a	pn(a) = %a	gn = %la\n",planck,pnk,gnp);
	
	//���������
	float toobing = 3.4e38 * 100.0f;
	printf("\ntob = %lf	tob(e) = %le\n",toobing,toobing); 
	
	float a,b;
	b = 2.0e+20 + 1.0;
	a = b - 2.0e+20;
	printf("\n%f\n",a);
	float a1,b1;
	b1 = 2.0e+4 + 1.0;
	a1 = b1 - 2.0e+4;
	printf("%f\n",a1);
	
	printf("%zd\n",sizeof(long long));
	
	float salary;
	printf("\adi:\n");
	printf("$______\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f dadada $%.2f",salary,salary * 12.0);
	printf("\rGee!\n");//\r,ʹ���ص���һ�е���ʼ�� 
	
	return 0;
}
