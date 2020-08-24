#include<stdio.h> 

int main(void){
    int i,j,num;
    
	printf("구구단 출력 : 2 ~ N단: N을 입력하시오: ");
	scanf("%d", &num);
	
	for(i =2;i<=num;i++){
		for(j = 2; j<10;j++){
		printf("%d X %d = %d\t", i,j,i*j);	
		}
		printf("\n");
	} 
	
    return 0;	
}
