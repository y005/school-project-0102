#include<stdio.h>

typedef struct point {
	int x, y;
}POINT;
typedef struct rectangular {
	int x1, y1, x2, y2;
}RECT;

int IsPointInRect(const POINT *, const RECT *);

int main(void) {
	POINT a;
	RECT b;
    int ans;
    
	printf("점의 좌표를 입력하세요: ");
	scanf("%d %d", &a.x, &a.y);
	printf("직사각형의 정보를 입력하세요: ");
	scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);
	ans = IsPointInRect(&a, &b);
	if(ans){
		printf("점은 직사각형 내부에 있습니다.");
	}
	else{
		printf("점은 직사각형 내부에 없습니다.");
	}
	return 0;
}

int IsPointInRect(const POINT *pt, const RECT *rect){
	if (((pt->x) < (rect->x2))&& ((pt->x)> (rect->x1))){
		if(((pt->y) < (rect->y2)) && ((pt->y) > (rect->y1))){
		    return 1;	
		}
		return 0;
	}
	return 0;
}
