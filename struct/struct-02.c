#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student { //����ü(�ٸ� Ÿ�Ե��� ��Ƶ� ����Ʈ) ����
	int number; //������
	char name[10]; //���ڹ迭
	double grade; //�Ǽ���(8����Ʈ)
};

int main()
{
	struct student s; //����ü ���� ����

	printf("�й��� �Է��Ͻÿ�: ");
	scanf("%d", &s.number); //����ü ����� �ּ� ����
	
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", s.name); //���ڿ��� �� ��ü�� �ּҸ� �ǹ� //&�� ������� �ʴ´�
	
	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf("%lf", &s.grade);

	printf("\n�й�: %d\n", s.number); //����ü ����.��� 
	printf("�̸�: %s\n", s.name);
	printf("����: %.2f\n", s.grade);
	return 0;
}
