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
	printf("******************��� ����ϱ�**************\n");
	while(1){
	    printf(" ���� �Է� (0�� �Է��ϸ� ����) : ");
	    scanf("%d",&num);
	    if(num==0){break;}
	    printf("Multiple of %d <= 100\n",num);
	    printMultiple(num);
    }
	return 0;
}
