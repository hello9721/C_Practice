#include <stdio.h>

// 문자 테이블

void main() {

	char str = 'A';
	char hex = 0x41;

	printf("%d\n%d\n", str, hex);		// 10진수로 출력 > 65
	printf("%c\n%c\n", str, hex);		// 문자로 출력   > A
	printf("%x\n%x\n", str, hex);		// 16진수로 출력 > 41

	// 응용
	// 0 ~ 29 사이에서 주어지는 number 가 0~9일때 'A', 10~19일때 'B', 20~29일때 'C'

	int number = 19;

	printf("%c 게이트\n", 'A' + number / 10);
	// 9 이하는 A+0 = A / 19 이하는 A+1 = B / 29 이하는 A+2 = C

}