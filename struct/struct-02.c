#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student { //구조체(다른 타입들을 모아둔 아파트) 선언
	int number; //정수형
	char name[10]; //문자배열
	double grade; //실수형(8바이트)
};

int main()
{
	struct student s; //구조체 변수 선언

	printf("학번을 입력하시오: ");
	scanf("%d", &s.number); //구조체 멤버의 주소 전달
	
	printf("이름을 입력하시오: ");
	scanf("%s", s.name); //문자열은 그 자체가 주소를 의미 //&를 사용하지 않는다
	
	printf("학점을 입력하시오(실수): ");
	scanf("%lf", &s.grade);

	printf("\n학번: %d\n", s.number); //구조체 변수.요소 
	printf("이름: %s\n", s.name);
	printf("학점: %.2f\n", s.grade);
	return 0;
}
