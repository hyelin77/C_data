#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char class;
	int num;
	int c;
	int java;
	int pyth;
	int tot;
	double avg;
	char e;
	int k = 1;

	while (k) //���� 1�� ������ k�� �ʿ����. �ؿ� k=0 ��� break���� ��
	{

		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &num);
		printf("��(A~C)�� �Է��Ͻÿ�: ");
		scanf(" %c", &class);
		printf("��� ������ �Է��Ͻÿ�: ");
		scanf("%d", &c);
		printf("�ڹ� ������ �Է��Ͻÿ�: ");
		scanf("%d", &java);
		printf("���̽� ������ �Է��Ͻÿ�: ");
		scanf("%d", &pyth);

		tot = c + java + pyth;
		avg = (double)tot / 3;
		printf("����: %d\t ���: %.2f\n", tot, avg);

		printf("------------------------------------------\n");
		printf("����� �����Ͻðڽ��ϱ�?(y/n): ");
		scanf(" %c", &e);

		if (e == 'y' || e == 'Y') {
			k = 0;
		}
	}
	printf("�����մϴ�.\n");
	return 0;
}