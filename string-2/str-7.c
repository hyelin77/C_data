#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //문자열 함수가 포함
#include <stdio.h>

int main()
{
	char name[5][10]; //5행 10열, 이름 5개 이름 당 각각 9자
	char addr[5][30]; 
	char search[10];  //찾고자 하는 사람의 이름을 9자 이내로 받겠다
	int i; 

	for (i = 0; i < 5; i++) { //5명 입력받음(0~4번째 방)
		printf("이름%d: ", i+1); //i가 0이지만 출력문에는 첫번째 뜻으로 1을 출력하기 위해 i+1을 사용
		scanf("%s", name[i]); //이름 5명분을 반복하여 입력받음
		printf("주소%d: ", i + 1); 
		scanf("%s", addr[i]);
	};
	printf("검색할 이름은: ");
	scanf("%s", search); //찾으려는 이름은 search에 들어가 있음 

	for (i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("이름: %s\t 주소: %s\n", name[i], addr[i]);
			return 0;
		}
		
	}

	printf("존재하지 않는 이름입니다.");
	return 0;
}