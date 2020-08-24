#include<stdio.h>
int main(void)
{ 	int select;
    while(1){
	   
	    printf("1.메뉴1\n2.메뉴2\n3.메뉴3\n0.종료\n>>> 선택 : ");
        scanf("%d", &select);
    
    	switch(select)
        { 
	        case 1:
                printf("메뉴 1이 선택되었습니다.\n");
                break;
      
	        case 2:
                printf("메뉴 2이 선택되었습니다.\n");
                break;
      
	        case 3:
                printf("메뉴 3이 선택되었습니다.\n");
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
