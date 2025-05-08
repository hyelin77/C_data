#include <stdio.h>

//값의 의한 호출
//void swap(int x, int y); //함수 원형
//
//int main()
//{
//	int a = 100, b = 200;
//	printf("a = %d, b = %d\n", a, b);
//
//	swap(a, b); //함수 호출 (a,b 가지고)
//	//함수 수행하고 돌아옴, 반환 결과물은 없음
//	
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}
//
//void swap(int x, int y) //a > x(100), b > y(200)
//{
//	int tmp;
//	printf("x = %d, y = %d\n", x, y); //100, 200
//
//	tmp = x; //tmp는 100
//	x = y; //y값을 x로 이동, x는 200
//	y = tmp; //tmp 100이 y로 이동
//
//	printf("x = %d, y = %d\n", x, y); //200, 100
//	return; //생략
//}

//참조의 의한 호출
void swap(int* px, int* py);
int main()
{
	int a = 100, b = 200;
	printf("a = %d, b = %d\n", a, b); //100, 200

	swap(&a, &b); //함수 호출(값이 아닌 주소 보냄)
	//함수 호출 후 돌아옴
	printf("a = %d, b = %d\n", a, b); //200, 100
	return 0;
}

void swap(int* px, int* py) //a 주소 > px, b 주소 > py
{
	int tmp;
	tmp = *px; //px가 a의 주소를 가리키고 있는데 그 값(100)
	*px = *py; //py가 b의 주소를 가리키고 있는데 그 값(200)
	          //px의 주소인 a에 저장
	*py = tmp; //py의 주소인 b에 저장
}ㅇ