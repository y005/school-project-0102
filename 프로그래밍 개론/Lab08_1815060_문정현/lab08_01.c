#include<stdio.h>
#include<string.h>

int main(void) {
	int arr[10] = { 0 };
	int num, i;
	int sum = 0;
	float average = 0;
    
	printf("�Է��� �������� ������ �Է��Ͻÿ�(10�� ����): ");
	scanf("%d", &num);
	printf("%d�� �����͸� ���ʴ�� �Է��Ͻÿ�\n", num);
	for(i = 0; i<num; i++) {
		printf("arr[%d]=",i);
		scanf("%d", &arr[i]);
		sum += arr[i];
    }
    
    average = (float)sum/num; 
    
	printf("�հ�� %d, ����� %f",sum,average);
	
	return 0;
}
