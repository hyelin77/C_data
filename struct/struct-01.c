#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy �Լ� ����

struct student { //����ü ����
	int number; //�й�
	char name[10]; //�̸�
	double grade; //����
};

int main()
{
	struct student s; //����ü ���� ����

	s.number = 20230001;
	strcpy(s.name, "ȫ�浿"); //���ڿ� ����(���ڿ��� ���� ������ �ȵ�)
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2f\n", s.grade);
	return 0;
}
