#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[100];
	int i;

	for (i = 0; i < 3; i++) {
		/*list[2].number = 24;
		strcpy(list[2].name, "홍길동");
		list[2].grade = 4.3;*/

		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);

		printf("이름을 입력하시오: ");
		scanf("%s", &list[i].name);

		printf("학점을 입력하시오: ");
		scanf("%lf", &list[i].grade);
	};


	/*printf("%d\n", list[2].number);
	printf("%s\n", list[2].name);
	printf("%.2f\n", list[2].grade);*/

	for (i = 0; i < 3; i++) {
		printf("학번: %d\t 이름: %s\t 학점: %.2f\n", list[i].number, list[i].name, list[i].grade);
	};
	

	return 0;

}

