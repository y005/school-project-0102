#include<stdio.h>
int main(void){   
    
	int select,num,a,b,c;

    while(1){

        printf("1.�޴�1\n2.�޴�2\n3.�޴�3\n0. ����\n>>> ���� : ");
        scanf("%d",&select);

        switch(select){    
		    case 1:
                printf("�޴� 1�� �����Դϴ�.");
                printf("������ �Է��ϼ��� ( 0 0 0 �Է½� ����) :");
                scanf("%d %c %d",&a,&b,&c);
                if(a == 0 && b == 0 && c == 0){
            	    break;
		        }
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
				break;              
		    case 2:
                printf("�޴� 2�� �����հ� ����Դϴ�.\n");
                printf("������ �Է��ϼ��� n = ");
                scanf("%d",&num);
                printf("%d\n", num*(num+1)/2);
				break;
		    case 3:
                printf("�޴� 3�� ���丮�� ����Դϴ�.\n");
                printf("������ �Է��ϼ��� n = ");
                scanf("%d",&num);
                printf("%d\n",!num);
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

