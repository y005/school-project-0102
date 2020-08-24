#include<stdio.h>
#include<string.h>

void inputString(char (*p) [30]){
	int i;
	
	printf("문장 5개를 입력하시오:\n");
	for(i=0;i<5;i++){
		gets(*(p+i));
	} 
}

void printString(char* str []){
	int i; 
	printf("문장 5개를 출력합니다.\n");
	 
	for(i=0;i<5;i++){
		printf("%s",str[i]);
		printf("\n");
	}
}

void moveString(char* str [], char (*p) [30]){
	int i;
	
	for(i=0;i<5;i++){
        str[i] = *(p+i);   
	}
    printf("문장이 이동됩니다.\n");
}

int main(void){
	
	char* str[5];
	char arr[5][30];
    
	inputString(arr);
	moveString(str,arr);
	printString(str);
	
	return 0;
}
