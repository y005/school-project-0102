#include<stdio.h>
int main(void)
{ 	int select;
    while(1){
	   
	    printf("1.�޴�1\n2.�޴�2\n3.�޴�3\n0.����\n>>> ���� : ");
        scanf("%d", &select);
    
    	switch(select)
        { 
	        case 1:
                printf("�޴� 1�� ���õǾ����ϴ�.\n");
                break;
      
	        case 2:
                printf("�޴� 2�� ���õǾ����ϴ�.\n");
                break;
      
	        case 3:
                printf("�޴� 3�� ���õǾ����ϴ�.\n");
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
