#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //���ڿ� �Լ��� ����
#include <stdio.h>

int main()
{
	char name[5][10]; //5�� 10��, �̸� 5�� �̸� �� ���� 9��
	char addr[5][30]; 
	char search[10];  //ã���� �ϴ� ����� �̸��� 9�� �̳��� �ްڴ�
	int i; 

	for (i = 0; i < 5; i++) { //5�� �Է¹���(0~4��° ��)
		printf("�̸�%d: ", i+1); //i�� 0������ ��¹����� ù��° ������ 1�� ����ϱ� ���� i+1�� ���
		scanf("%s", name[i]); //�̸� 5����� �ݺ��Ͽ� �Է¹���
		printf("�ּ�%d: ", i + 1); 
		scanf("%s", addr[i]);
	};
	printf("�˻��� �̸���: ");
	scanf("%s", search); //ã������ �̸��� search�� �� ���� 

	for (i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("�̸�: %s\t �ּ�: %s\n", name[i], addr[i]);
			return 0;
		}
		
	}

	printf("�������� �ʴ� �̸��Դϴ�.");
	return 0;
}