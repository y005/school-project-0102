#include<stdio.h>
#include<string.h>

int main(void) {

	char lyrics[] = "hello";
	int arr[5] = { 2,3,4,5,6 };
	int* pi = arr;
	char* pc = lyrics;
	int i;

	printf("������ ������ ����Ͽ� �迭�� �� ��� �ּҸ� �����ϰ� ����Ͻÿ�\n");

	for (i = 0; i<strlen(lyrics); i++) {
		printf("lyrics[%d]�� �ּ�: %p \t", i, &lyrics[i]);
		printf("lyrics[%d]�� �ּ�: %p \t", i, pc+i);
	    printf("lyrics[%d]�� �ּ�: %p \t", i, &pc[i]);
	}
	for (i = 0; i<5; i++) {
		printf("arr[%d]�� �ּ�: %p \t", i, &arr[i]);
		printf("arr[%d]�� �ּ�: %p \t", i, pi+i);
	    printf("arr[%d]�� �ּ�: %p \t", i, &pi[i]);
	}

	printf("������ ������ ����Ͽ� �迭�� �� ��� ����(��)�� �����ϰ� ����Ͻÿ�\n");

	for (i = 0; i<strlen(lyrics); i++) {
		printf("lyrics[%d]�� ��: %c\t", i, lyrics[i]);
		printf("lyrics[%d]�� ��: %c\t", i, *(pc+i));
        printf("lyrics[%d]�� ��: %c\t", i, pc[i]);
        printf("\n");
	}
    for (i = 0; i<5; i++) {
		printf("arr[%d]�� ��: %d\t", i, arr[i]);
		printf("arr[%d]�� ��: %d\t", i, *(pi+i));
	    printf("arr[%d]�� ��: %d\t", i, pi[i]);
	    printf("\n");
	}
	return 0;

}

