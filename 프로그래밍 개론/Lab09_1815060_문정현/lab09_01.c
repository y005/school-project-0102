#include<stdio.h>
#include<string.h>

int main(void) {

	char lyrics[] = "hello";
	int arr[5] = { 2,3,4,5,6 };
	int* pi = arr;
	char* pc = lyrics;
	int i;

	printf("포인터 변수를 사용하여 배열의 각 요소 주소를 동일하게 출력하시오\n");

	for (i = 0; i<strlen(lyrics); i++) {
		printf("lyrics[%d]의 주소: %p \t", i, &lyrics[i]);
		printf("lyrics[%d]의 주소: %p \t", i, pc+i);
	    printf("lyrics[%d]의 주소: %p \t", i, &pc[i]);
	}
	for (i = 0; i<5; i++) {
		printf("arr[%d]의 주소: %p \t", i, &arr[i]);
		printf("arr[%d]의 주소: %p \t", i, pi+i);
	    printf("arr[%d]의 주소: %p \t", i, &pi[i]);
	}

	printf("포인터 변수를 사용하여 배열의 각 요소 내용(값)을 동일하게 출력하시오\n");

	for (i = 0; i<strlen(lyrics); i++) {
		printf("lyrics[%d]의 값: %c\t", i, lyrics[i]);
		printf("lyrics[%d]의 값: %c\t", i, *(pc+i));
        printf("lyrics[%d]의 값: %c\t", i, pc[i]);
        printf("\n");
	}
    for (i = 0; i<5; i++) {
		printf("arr[%d]의 값: %d\t", i, arr[i]);
		printf("arr[%d]의 값: %d\t", i, *(pi+i));
	    printf("arr[%d]의 값: %d\t", i, pi[i]);
	    printf("\n");
	}
	return 0;

}

