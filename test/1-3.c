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

	while (k) //여기 1을 넣으면 k가 필요없음. 밑에 k=0 대신 break쓰면 됨
	{

		printf("학번을 입력하시오: ");
		scanf("%d", &num);
		printf("반(A~C)을 입력하시오: ");
		scanf(" %c", &class);
		printf("언어 점수를 입력하시오: ");
		scanf("%d", &c);
		printf("자바 점수를 입력하시오: ");
		scanf("%d", &java);
		printf("파이썬 점수를 입력하시오: ");
		scanf("%d", &pyth);

		tot = c + java + pyth;
		avg = (double)tot / 3;
		printf("총점: %d\t 평균: %.2f\n", tot, avg);

		printf("------------------------------------------\n");
		printf("계산을 종료하시겠습니까?(y/n): ");
		scanf(" %c", &e);

		if (e == 'y' || e == 'Y') {
			k = 0;
		}
	}
	printf("종료합니다.\n");
	return 0;
}