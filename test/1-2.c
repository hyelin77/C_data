//if문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x, int y); //main 위에 함수 원형. 세미콜론 찍기
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);
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

	if (op == '+') {
		r1 = add(a, b);
	}

	else if (op == '-') {
		r1 = sub(a, b);
	}
	

	else if (op == '*') {
		r1 = mul(a, b);
	}
	

	else if (op == '/') {
		r2 = div(a, b);
	}
	
	else {
		printf("연산자를 잘못 입력하셨습니다.\n");
	}

	if (op == '+' || op == '-' || op == '*') {
		printf("%d %c %d = %d\n", a, op, b, r1);
	}

	else if (op == '/') {
		printf("%d %c %d = %.2f\n", a, op, b, r2);
	}

	return 0;
}

int add(int x, int y) //형은 같아도 이름은 같지 않아도 됨
{
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) 
{
	return x * y;
}

double div(int x, int y)
{
	return (double)x / y;
}