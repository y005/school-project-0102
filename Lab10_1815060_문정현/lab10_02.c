#include<stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};


struct student list[] = {
	{ 20120001,"ȫ�浿",4.2 },
	{ 20120001,"��ö��",3.2 },
	{ 20120001,"�迵��",3.9 },

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
	printf("������ ���� ���� �л��� (�̸�: %s, �й�: %d, ����: %f)�Դϴ�", list[best].name, list[best].number, list[best].grade);
	return 0;
}











