#include<stdio.h>
#include<string.h>

int main(void) {
	int arr[10] = { 0 };
	int num, i;
	int sum = 0;
	float average = 0;
    
	printf("입력할 데이터의 개수를 입력하시오(10개 이하): ");
	scanf("%d", &num);
	printf("%d의 데이터를 차례대로 입력하시오\n", num);
	for(i = 0; i<num; i++) {
		printf("arr[%d]=",i);
		scanf("%d", &arr[i]);
		sum += arr[i];
    }
    
    average = (float)sum/num; 
    
	printf("합계는 %d, 평균은 %f",sum,average);
	
	return 0;
}
