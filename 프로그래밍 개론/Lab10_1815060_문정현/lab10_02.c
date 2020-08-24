#include<stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};


struct student list[] = {
	{ 20120001,"홍길동",4.2 },
	{ 20120001,"김철수",3.2 },
	{ 20120001,"김영희",3.9 },

};


int main(void){
	int i,best;
	int max = 0;

	for (i = 0; i < 3; i++) {
		if (list[i].grade > max) {
			best = i;
			max = list[i].grade;
		}
	}
	printf("평점이 가장 높은 학생은 (이름: %s, 학번: %d, 평점: %f)입니다", list[best].name, list[best].number, list[best].grade);
	return 0;
}











