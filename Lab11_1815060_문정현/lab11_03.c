#include<stdio.h>

void MinMax(int[], int*, int*);

int main(void) {

	int num[] = { 55,99,3,6,23,48,11 };
	int a,b;
    MinMax(num,&a,&b);
    printf("최소값: %d, 최대값: %d",a,b);
	return 0;

}


void MinMax(int num[], int* a, int* b) {
	int i,index1=0,index2=0;

	for (i = 0; i < 7;i++) {
		if (num[i] <= num[index1]) {
			index1 = i;
		}
		if (num[i] >= num[index2]) {
			index2 = i;
		}
	}
	*a = num[index1];
	*b = num[index2];
	
}

