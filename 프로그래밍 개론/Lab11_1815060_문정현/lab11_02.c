#include<stdio.h>

int GCD(int, int);

int main(void) {
	int a, b;

	printf("두 양의 정수 입력하세요");
	scanf("%d %d", &a, &b);
	printf("%d , %d 의 최대공약수는 %d 입니다", a, b, GCD(a, b));
	return 0;
}

int GCD(int a, int b) {
	if (b == 0){return a;}
	if (a>b){return GCD(b, a%b);}
	if(a<=b){return GCD(b,a);}
}
