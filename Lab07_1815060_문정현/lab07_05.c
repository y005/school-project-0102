#include<stdio.h> 
#include<math.h>

double math1(int a, int b);
int math2(int a, int b);
int math3(int a, int b);

int main(void){
	int a,b;
    printf("한 점의 좌표 (x,y)를 입력하세요. : ");
	scanf("%d %d",&a, &b);
    printf("원점과 (%d, %d)사이의 거리 = %f\n",a,b,math1(a,b));
    printf("원점과 (%d, %d)이 이루는 직사각형의 면적 = %d\n",a,b,math2(a,b));
    printf("원점과 (%d, %d)이 이루는 직사각형의 둘레 = %d\n",a,b,math3(a,b));
    
	return 0;
}

double math1(int a, int b){
	
	double tem = sqrt(a*a+b*b);
	return tem;
}

int math2(int a, int b){
	return a*b;
}

int math3(int a, int b){
	
	return 2*(a+b);
}
