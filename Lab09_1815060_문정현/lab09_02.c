#include<stdio.h>

int main(void) {

	int arr[5];
	int* pi = arr;
	int i;

	printf("�� �迭�� ���� �Ҵ��ϴµ�, �����͸� ���� �� �迭��ҿ� �����Ѵ�.\n");
	for (i = 0; i<5; i++) {
		printf("arr[%d]�� ���� �Է�:",i);
		scanf("%d", pi+i);
		printf("\n");
	}
	printf("�迭�� �� ��� ���� ������ ������ ���� ����Ͻÿ�\n");
	for (i = 0; i<5; i++) {
		printf("arr[%d]�� ��: %d\t", i,*(pi+i));
	    printf("arr[%d]�� ��: %d\t", i,pi[i]);
	    printf("\n");
	}
	return 0;
}
