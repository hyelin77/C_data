#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[100];
	char a; //1글자
	int k = 0; //배열의 위치를 알려주는 변수, 0번째 방부터 시작하므로 0으로 초기화
	int i = 1;
	while (i) //i가 1이고, 1이면 참. 조건이 만족(참)할때까지 반복
		//while(i)이면 무한반복, 0이 되면 거짓=반복문 끝
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[k].number);

		printf("이름을 입력하시오: ");
		scanf("%s", &list[k].name);

		printf("학점을 입력하시오: ");
		scanf("%lf", &list[k].grade);
		printf("학번: %d\t 이름: %s\t 학점: %.2f\n", list[k].number, list[k].name, list[k].grade);
		k = k + 1;
		printf("===============================================\n");
		printf("작업을 종료하시겠습니까?(y 또는 Y / n 또는 N)");
		scanf(" %c", &a); //한 글자(1바이트)만 입력받을 때 위에서 입력 받아서 내려옴>위의 엔터키를 그대로 받아서 넘어가므로 실제 원하는 글자를 입력받지 못하므로 엔터키 소멸을 위해 띄어쓰기
		if (a == 'y' || a == 'Y') {
			printf("종료되었습니다.");
			i=0;
		}
		else if (a == 'n' || a == 'N') {
			i = 1;
		}
		else {
			printf("잘못 입력하였습니다.\n");
			i = 0;
		}
	
	
	};
		

	return 0;

}
