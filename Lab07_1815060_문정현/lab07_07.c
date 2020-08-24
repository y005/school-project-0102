#include<stdio.h>

void printMultiple(int num){
	int i,tem;
	
    for(i=1;;i++){
    	tem = i*num;
    	if(tem >100){
    		break;
		}
		printf("%d ",tem);
    }
}



int main(void){
	int i,num;
	printf("******************배수 출력하기**************\n");
	while(1){
	    printf(" 정수 입력 (0을 입력하면 종료) : ");
	    scanf("%d",&num);
	    if(num==0){break;}
	    printf("Multiple of %d <= 100\n",num);
	    printMultiple(num);
    }
	return 0;
}
