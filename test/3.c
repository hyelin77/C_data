//재귀함수: 함수 내부에서 자기 자신을 다시 호출(호출 중단 조건이 변경될 명령문 필수 포함)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int n);
int main()
{
	int n, res;
	printf("정수 입력: ");
	scanf("%d", &n);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	res = func(n);
	printf("결과: %d\n", res);


	return 0;
}

int func(int n)
{
	if (n == 1) {
		return 1;
	}

	else {
		return n * func(n - 1);
	}
}