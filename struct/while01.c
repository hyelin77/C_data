#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, mo; //�ܾ� �ʱⰪ, ����� ��
	sum = 10000; //�ܾ�
	char gu; //���� a, b
	char q; //���� ���� �Է� ���� ��

	while (1) {
		printf("�ݾ��� �Է��Ͻÿ�: ");
		scanf("%d", &mo); //�ݾ� �Է� ����


		printf("������ �Է��Ͻÿ�(a: �Ա�, b: ���): ");
		scanf(" %c", &gu); //���� �Է� ����. *�տ� ���� ����*

		switch (gu) //������ ���� �ִ� ����
		{
		case 'a': //��� ����
			sum = sum + mo;
			printf("�Ա��� �����ϼ̽��ϴ�.\n");
			printf("�ܰ�: %d��\n", sum);
			break;

		case 'b':
			sum = sum - mo;
			printf("����� �����ϼ̽��ϴ�.\n");
			printf("�ܰ�: %d��\n", sum);
			break;

		default:
			printf("���� �����Դϴ�.");
			break;
		}

		printf("�Է��� �����ұ��?( y / n ): ");
		scanf(" %c", &q);

		if (q == 'y' || q == 'Y') {
			break;
		}
	}
	printf("�Է��� �����մϴ�.");
	return 0;
}