#include<stdio.h>
int main(void){
	int num,i,j;
	
	printf("정수 입력 : ");
	scanf("%d", &num);
	
	for(i=2; i<=num; i++){
	    for(j=2;j<i;j++){
		    if(i % j==0){
			    break;
			} 
	    }
		if(j == i){
		    printf("%d ",j);
		}
    }
    return 0;
}
