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
		strcpy(list[2].name, "ȫ�浿");
		list[2].grade = 4.3;*/

		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);

		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", &list[i].name);

		printf("������ �Է��Ͻÿ�: ");
		scanf("%lf", &list[i].grade);
	};


	/*printf("%d\n", list[2].number);
	printf("%s\n", list[2].name);
	printf("%.2f\n", list[2].grade);*/

	for (i = 0; i < 3; i++) {
		printf("�й�: %d\t �̸�: %s\t ����: %.2f\n", list[i].number, list[i].name, list[i].grade);
	};
	

	return 0;

}

