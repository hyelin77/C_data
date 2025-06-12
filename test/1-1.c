//switch문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b; //숫자 2개 입력 받을 정수
	int r1 = 0; //+ - * 결과
	double r2 = 0; // / 결과
	//scanf: float=%f, double=%lf, printf: float=%f, double=%f(printf 시에는 c언어에서 실수형 기본값이 double)
	char op; //연산자 받을 곳

	printf("첫번째 숫자를 입력하시오: ");
	scanf("%d", &a); //scanf 쓸 때는 &넣기
	
	printf("두번째 숫자를 입력하시오: ");
	scanf("%d", &b);
	
	printf("연산할 기호를 입력하시오(+, -, *, /): ");
	scanf(" %c", &op); //띄어쓰기

	switch (op)
	{
	case '+': //세미콜론이 아닌 콜론
			r1 = a + b;
			printf("%d %c %d = %d", a, op, b, r1); //결과: a + b = r1
			break;
	case '-':
			r1 = a - b;
			printf("%d %c %d = %d", a, op, b, r1);
			break;
	case '*':
			r1 = a * b;
			printf("%d %c %d = %d", a, op, b, r1);
			break;
	case '/':
			r2 = (double)a / b; //입력받는 숫자가 둘 다 정수형일 때 나누기 연산을 할 경우, 결과가 정수형으로 나오기 때문에 둘 중 하나를 실수형으로 바꿔주어야 함.
			printf("%d %c %d = %.2f", a, op, b, r2); //소수점 n자리까지 표시할 때는 %와 f 사이에 .n 넣기
			break;

	default:
		printf("연산자를 잘못 입력하셨습니다.");
		break;
	}


	return 0;
}