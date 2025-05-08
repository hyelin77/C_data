#include <stdio.h> //전처리기, printf를 출력하기 위함

int main() //main은 한 개 무조건 선언, void 생략
{
	int i = 10; //정수형 변수 i 선언
	double f = 12.3; //실수형 변수 f 선언
	int* pi = NULL; //정수형 포인터 변수, *는 주소(NULL=아무것도 가르키지 않음
)

	double* pf = NULL;  //실수형 포인터 변수, *는 주소(주소는 비워놔야 하기 때문애 NULL를 대입)
	pi = &i; //pi에 직접 주소 불러오도록 설정
	pf = &f; //pf에 직접 주소 불러오도록 설정

	printf("%p %p %d \n", pi, &i, i); //주소 2개와 값 하나 출력
	printf("%p %p %.2f \n", pf, &f, f); //주소 2개와 값 하나 출력
	return 0; //무사히 종료됨
}