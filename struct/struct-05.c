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
	char a; //1����
	int k = 0; //�迭�� ��ġ�� �˷��ִ� ����, 0��° ����� �����ϹǷ� 0���� �ʱ�ȭ
	int i = 1;
	while (i) //i�� 1�̰�, 1�̸� ��. ������ ����(��)�Ҷ����� �ݺ�
		//while(i)�̸� ���ѹݺ�, 0�� �Ǹ� ����=�ݺ��� ��
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[k].number);

		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", &list[k].name);

		printf("������ �Է��Ͻÿ�: ");
		scanf("%lf", &list[k].grade);
		printf("�й�: %d\t �̸�: %s\t ����: %.2f\n", list[k].number, list[k].name, list[k].grade);
		k = k + 1;
		printf("===============================================\n");
		printf("�۾��� �����Ͻðڽ��ϱ�?(y �Ǵ� Y / n �Ǵ� N)");
		scanf(" %c", &a); //�� ����(1����Ʈ)�� �Է¹��� �� ������ �Է� �޾Ƽ� ������>���� ����Ű�� �״�� �޾Ƽ� �Ѿ�Ƿ� ���� ���ϴ� ���ڸ� �Է¹��� ���ϹǷ� ����Ű �Ҹ��� ���� ����
		if (a == 'y' || a == 'Y') {
			printf("����Ǿ����ϴ�.");
			i=0;
		}
		else if (a == 'n' || a == 'N') {
			i = 1;
		}
		else {
			printf("�߸� �Է��Ͽ����ϴ�.\n");
			i = 0;
		}
	
	
	};
		

	return 0;

}
