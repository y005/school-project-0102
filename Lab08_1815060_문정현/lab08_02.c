#include<stdio.h>
#include<string.h>

int main(void) {
	char str1[30];
	int i,num;

	printf("문자열을 입력:");
	gets(str1);
	num = strlen(str1);
	printf("반대로 출력한 문자열:");
	
	for (i = 0; i < num; i++) {
		printf("%c", str1[num-i-1]); 
	}
	printf("\n"); 
	return 0;
}
