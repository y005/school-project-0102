#include<stdio.h>

int GCD(int, int);

int main(void) {
	int a, b;

	printf("�� ���� ���� �Է��ϼ���");
	scanf("%d %d", &a, &b);
	printf("%d , %d �� �ִ������� %d �Դϴ�", a, b, GCD(a, b));
	return 0;
}

int GCD(int a, int b) {
	if (b == 0){return a;}
	if (a>b){return GCD(b, a%b);}
	if(a<=b){return GCD(b,a);}
}
