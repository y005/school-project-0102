#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct S {

	char name[10];
	int grade, year;

}STUDENT;

void inputStudent(STUDENT s[], int * n);
void outputStudent(STUDENT* s, int * n);

int main(void) {

	STUDENT s[MAX];
	int n;

	printf("학생수는? :");
	scanf("%d", &n);
	inputStudent(s, &n);
	outputStudent(s, &n);

	return 0;
}

void inputStudent(STUDENT s[], int* n) {
	int i;

	printf("이름 학년 점수\n");
	printf("--------------------------------\n");

	for (i = 0; i<*n; i++) {
		scanf("%s %d %d", &s[i].name,&s[i].year, &s[i].grade);
		//scanf("%d %d", &s[i].year, &s[i].grade);
	}
	printf("--------------------------------\n\n");
}

void outputStudent(STUDENT* s, int * n) {

	int i;
	int total[5] = { 0 };
	int year[5] = { 0 };

	for (i = 0; i < *n; i++) {
		switch (s[i].year) {
		    case(1):
			    total[1] += s[i].grade;
			    year[1] += 1;
			    break;
		    case(2):
			    total[2] += s[i].grade;
			    year[2] += 1;
			    break;
		    case(3):
			    total[3] += s[i].grade;
			    year[3] += 1;
			    break;
		    case(4):
			    total[4] += s[i].grade;
			    year[4] += 1;
			    break;
	    }
	}

    printf("+++학년별 학생수및 점수 통계+++\n\n");
    printf("학년\t인원\t합계\t평균\n");
    printf("--------------------------------\n");
	for (i = 1; i <= 4; i++) {
		if (year[i] != 0) {
			printf("%d\t%d\t%d\t%f\n",i, year[i], total[i], (float)total[i]/year[i]);
		}
	}
}


