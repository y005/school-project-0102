#include<stdio.h> 
#include<math.h>

double math1(int a, int b);
int math2(int a, int b);
int math3(int a, int b);

int main(void){
	int a,b;
    printf("�� ���� ��ǥ (x,y)�� �Է��ϼ���. : ");
	scanf("%d %d",&a, &b);
    printf("������ (%d, %d)������ �Ÿ� = %f\n",a,b,math1(a,b));
    printf("������ (%d, %d)�� �̷�� ���簢���� ���� = %d\n",a,b,math2(a,b));
    printf("������ (%d, %d)�� �̷�� ���簢���� �ѷ� = %d\n",a,b,math3(a,b));
    
	return 0;
}

double math1(int a, int b){
	
	double tem = sqrt(a*a+b*b);
	return tem;
}

int math2(int a, int b){
	return a*b;
}

int math3(int a, int b){
	
	return 2*(a+b);
}
