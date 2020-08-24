#include<stdio.h>
int main(void){   
    
	int select,num,a,b,c;

    while(1){

        printf("1.메뉴1\n2.메뉴2\n3.메뉴3\n0. 종료\n>>> 선택 : ");
        scanf("%d",&select);

        switch(select){    
		    case 1:
                printf("메뉴 1이 계산기입니다.");
                printf("수식을 입력하세요 ( 0 0 0 입력시 종료) :");
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
                printf("메뉴 2는 누적합계 계산입니다.\n");
                printf("정수를 입력하세요 n = ");
                scanf("%d",&num);
                printf("%d\n", num*(num+1)/2);
				break;
		    case 3:
                printf("메뉴 3은 팩토리알 계산입니다.\n");
                printf("정수를 입력하세요 n = ");
                scanf("%d",&num);
                printf("%d\n",!num);
                break;
		    case 0:
                return 0;
            
			default:
			    printf("잘못 선택하셨습니다.\n");
			    break;
                    
        }
        
    }
    
    return 0;

}

