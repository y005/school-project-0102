#include<stdio.h>
#include<string.h>

void inputString(char (*p) [30]){
	int i;
	
	printf("���� 5���� �Է��Ͻÿ�:\n");
	for(i=0;i<5;i++){
		gets(*(p+i));
	} 
}

void printString(char* str []){
	int i; 
	printf("���� 5���� ����մϴ�.\n");
	 
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
    printf("������ �̵��˴ϴ�.\n");
}

int main(void){
	
	char* str[5];
	char arr[5][30];
    
	inputString(arr);
	moveString(str,arr);
	printString(str);
	
	return 0;
}
