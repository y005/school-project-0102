#include<stdio.h>
#include<string.h>

int main(void) {
	char str1[30];
	int i,num;

	printf("���ڿ��� �Է�:");
	gets(str1);
	num = strlen(str1);
	printf("�ݴ�� ����� ���ڿ�:");
	
	for (i = 0; i < num; i++) {
		printf("%c", str1[num-i-1]); 
	}
	printf("\n"); 
	return 0;
}
