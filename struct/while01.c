#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, mo; //잔액 초기값, 입출금 값
	sum = 10000; //잔액
	char gu; //구분 a, b
	char q; //종료 여부 입력 받을 곳

	while (1) {
		printf("금액을 입력하시오: ");
		scanf("%d", &mo); //금액 입력 받음


		printf("구분을 입력하시오(a: 입금, b: 출금): ");
		scanf(" %c", &gu); //구분 입력 받음. *앞에 공백 주의*

		switch (gu) //조건을 갖고 있는 변수
		{
		case 'a': //물어볼 조건
			sum = sum + mo;
			printf("입금을 선택하셨습니다.\n");
			printf("잔고: %d원\n", sum);
			break;

		case 'b':
			sum = sum - mo;
			printf("출금을 선택하셨습니다.\n");
			printf("잔고: %d원\n", sum);
			break;

		default:
			printf("선택 오류입니다.");
			break;
		}

		printf("입력을 종료할까요?( y / n ): ");
		scanf(" %c", &q);

		if (q == 'y' || q == 'Y') {
			break;
		}
	}
	printf("입력을 종료합니다.");
	return 0;
}