#include <stdio.h>

int main()
{
	int i; //������ ���� ���� 
	char str[4]; //���� �迭 4�ڸ�
	str[0] = 'a'; //�� �ϳ��� ����
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0'; //null�� ����
	//char str[4]="abc";
	//char str[4]={'a', 'b', 'c', '\0'};

	i = 0;
	//while (str[i] != '\0') //�ݺ���(null���� �ƴ� ��)
	//{					//null ���� ������ ����
	//	printf("%c", str[i]); // 1���� > %c
	//	i++; //0~2����� ��� �����ϸ� �ݺ�
	//}

	/*for (i=0; i < 3; i++)
	{
		printf("%c", str[i]);
	}*/

	i = 0;
	//printf("%c%c%c", str[i], str[i+1], str[i+2]);
	printf("%s\n", str);

	return 0;
}
//for(�ʱⰪ;���ǽ�;������)