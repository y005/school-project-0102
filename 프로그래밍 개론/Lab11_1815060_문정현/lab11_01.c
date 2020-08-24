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
    
	printf("���� ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &a.x, &a.y);
	printf("���簢���� ������ �Է��ϼ���: ");
	scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);
	ans = IsPointInRect(&a, &b);
	if(ans){
		printf("���� ���簢�� ���ο� �ֽ��ϴ�.");
	}
	else{
		printf("���� ���簢�� ���ο� �����ϴ�.");
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
