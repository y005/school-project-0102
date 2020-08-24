#include<stdio.h>
#include<stdlib.h>



void sort(int* p, int n) {

	int i, j, temp,min;

	for (j = 0; j< n - 1; j++) {
		min = j;
		for (i = j + 1; i<n; i++) {
			if (p[i] < p[min]) {
				min = i;
			}
		}

		temp = p[j];
		p[j] = p[min];
		p[min] = temp;

	}

}

void RandArr(int* p, int n) {

	int i;

	for (i = 0; i<n; i++) {
		*(p + i) = rand();
	}
}

void printArr(int*p,int n) {

	int i;

	for (i = 0; i < n; i++) {
		printf("%d ",*(p+i));
	}
}
int main(void){

	int size;
	int* p;

	printf("생성할 정수 데이터 개수 입력: ");
	scanf("%d", &size);
	p = malloc(sizeof(int)*size);
	RandArr(p,size);
	printf("생성된 데이터:\n");
	printArr(p, size);
	printf("\n");
	sort(p, size);
	printf("정렬된 데이터:\n");
	printArr(p, size);
	printf("\n");

	free(p);
	return 0;
}




