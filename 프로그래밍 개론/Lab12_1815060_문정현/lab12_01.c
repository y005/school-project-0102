#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 0

int main(void){
	int i,num,index=0;
	int arr[100];
	
	printf("���� ������ �������� ����(1~100): ");
	scanf("%d",&num);
	srand((unsigned)time(NULL));
	for(i=0;i<num;i++){
		arr[i] = rand()%1000+1;
	} 
	for(i=0;i<num;i++){
	    printf("%d ",arr[i]);
	    if(arr[i]>=arr[index]){
    	     index = i;
        }
	
	}
	printf("\n����Ʈ�� �ִ밪: %d",arr[index]);
	return 0;
}
