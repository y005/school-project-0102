#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 0

int main(void){
	int i,num,index=0;
	int arr[100];
	
	printf("랜덤 생성할 데이터의 개수(1~100): ");
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
	printf("\n리스트의 최대값: %d",arr[index]);
	return 0;
}
