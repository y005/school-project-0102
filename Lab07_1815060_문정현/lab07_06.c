#include<stdio.h>
int a,c;
char b;

void calculate(void){
	switch(b){
	 	case '+':
	        printf("%d * %d = %d\n",a,c,a+c); 
			break;   
	 	case '-':
		    printf("%d * %d = %d\n",a,c,a-c);
			break;    
	    case '*':		 
            printf("%d * %d = %d\n",a,c,a*c);
			break;    
	 	case '/':
            printf("%d * %d = %d\n",a,c,a/c);
			break;    	
	}
}

int sumF(int n){
 	int tem = n*(n+1)/2;
	return tem;
 }

int factorial(int n){
	int tem=1,i;
	for(i=1;i<=n;i++){
		tem *= i;
	}
	return tem;
}


int main(void){   
    
	int select;
    int num;

    while(1){

        printf("1.�޴�1\n2.�޴�2\n3.�޴�3\n0. ����\n>>> ���� : ");
        scanf("%d",&select);

        switch(select){    
		    case 1:
                printf("�޴� 1�� �����Դϴ�.\n");
                printf("������ �Է��ϼ��� ( 0 0 0 �Է½� ����) :");
                scanf("%d %c %d",&a,&b,&c);
                if(a == 0 && b == 0 && c == 0){
            	    break;
		        }
		        calculate();
                break;
		    case 2:
                printf("�޴� 2�� �����հ� ����Դϴ�.\n");
                printf("������ �Է��ϼ��� n = ");
                scanf("%d",&num);
                printf("%d", sumF(num));
				break;
		    case 3:
                printf("�޴� 3�� ���丮�� ����Դϴ�.\n");
                printf("������ �Է��ϼ��� n = ");
                scanf("%d",&num);
                printf("%d",factorial(num));
                break;
		    case 0:
                return 0;
            default:
			    printf("�߸� �����ϼ̽��ϴ�.\n");
			    break;
                
        }
        
    }
    
    return 0;

}

