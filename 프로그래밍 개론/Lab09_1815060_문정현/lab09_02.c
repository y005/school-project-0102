#include<stdio.h>

int main(void) {

	int arr[5];
	int* pi = arr;
	int i;

	printf("각 배열에 값을 할당하는데, 포인터를 통해 각 배열요소에 접근한다.\n");
	for (i = 0; i<5; i++) {
		printf("arr[%d]에 값을 입력:",i);
		scanf("%d", pi+i);
		printf("\n");
	}
	printf("배열의 각 요소 값을 포인터 변수를 통해 출력하시오\n");
	for (i = 0; i<5; i++) {
		printf("arr[%d]의 값: %d\t", i,*(pi+i));
	    printf("arr[%d]의 값: %d\t", i,pi[i]);
	    printf("\n");
	}
	return 0;
}
