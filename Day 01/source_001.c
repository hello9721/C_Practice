/*
# C 프로그램 생성 단계
> 소스파일(c) > 목적파일(obj) > 실행파일(exe)

> 소스파일을 프로그래머가 작성하면,
> 컴파일러가 컴파일을 통해 기계어 상태의 목적파일로 만들고,
> 링커가 링크를 통해 실행가능한 상태의 실행파일로 만든다.

> 컴파일 : C언어 문법 규칙에 맞는지 체크.
> 링크 : 여러개의 목적파일들과 라이브러리를 연결하여 하나의 실행 파일을 생성.
*/

#include <stdio.h>				// C 라이브러리에 정의된 함수를 사용하는데 필요.

void main()						// 메인함수
{								// 함수의 시작과 끝은 중괄호
	
	printf("Hello, World!");	// 문자열 출력

	char* name;					// 변수 선언
	int age;
	double height;
	char blood;

	name = "Hana";				// 변수에 값 할당
	age = 26;
	height = 161.9;
	blood = "O";

}

