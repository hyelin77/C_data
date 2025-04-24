#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y); //함수원형
int sub(int x, int y); //main이 각 함수보다 먼저 나오므로 미리 컴파일러에게 함수 정보를 알려줌(main이 맨 끝에 있을 경우 이 작업을 하지 않아도 됨)
int mul(int x, int y);
double div(int x, int y);
void prn1(int result1);
void prn2(double result2);

int main(void)
{
	int sel;
	int a, b; //a,b는 숫자(소수점 없는 정수)를 입력받아서 저장할 변수
	int res1; //+, -, * 결과(정수)를 저장
	double res2; //나누기는 결과로 실수가 나옴, 그래서 실수형인 double을 사용하여 변수 선언

	printf("첫 번째 숫자를 입력하세요: ");
	scanf("%d", &a);
	printf("두 번째 숫자를 입력하세요: ");
	scanf("%d", &b);

	for (int i = 1; i <= 3; i++)
	{
		printf("원하는 연산을 선택하시오(1:더하기 / 2:빼기 / 3:곱하기 / 4:나누기) : ");
		scanf("%d", &sel); //&은 주소를 의미

		if (sel == 1) res1 = sum(a, b); //더하기 함수 호출 //a,b라는 인수 보냄 //sum 함수 호출하여 반환(return)된 값을 res1에 저장함

		else if (sel == 2) res1 = sub(a, b);

		else if (sel == 3) res1 = mul(a, b);

		else if (sel == 4) res2 = div(a, b);


		if (sel == 1 || sel == 2 || sel == 3)
		{
			prn1(res1); break;
		}
		else if (sel == 4) {
			prn2(res2); break;
		}
		else printf("입력 오류입니다. 다시 입력하세요.");
	}
	

	return 0;
}

int sum(int x, int y) //매개변수로 받음. a > x, b > y //매개변수는 형(정수형)을 선언하면서 변수 기록 //인수와 매개변수는 개수와 형이 같아야 함
{
	int k;
	k = x + y;
	return k;
}

int sub(int x, int y) 
{
	int k;
	k = x - y;
	return k;
}

int mul(int x, int y) 
{
	int k;
	k = x * y;
	return k;
}

double div(int x, int y) 
{
	double q;
	q = x / (double)y;
	return q;
}

void prn1(int result1) //res1 > result1 (정수형을 받음) //반환값이 없이 돌아감(return) > void 함수형 처리
{
	printf("결과는 %d", result1); //출력 완료
	return; //0 생략 가능, 완전히 생략도 가능
}

void prn2(double result2) 
{
	printf("결과는 %.2lf", result2); 
	return;
}