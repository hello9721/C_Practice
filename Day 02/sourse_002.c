#include <stdio.h>

// ���� ���̺�

void main() {

	char str = 'A';
	char hex = 0x41;

	printf("%d\n%d\n", str, hex);		// 10������ ��� > 65
	printf("%c\n%c\n", str, hex);		// ���ڷ� ���   > A
	printf("%x\n%x\n", str, hex);		// 16������ ��� > 41

	// ����
	// 0 ~ 29 ���̿��� �־����� number �� 0~9�϶� 'A', 10~19�϶� 'B', 20~29�϶� 'C'

	int number = 19;

	printf("%c ����Ʈ\n", 'A' + number / 10);
	// 9 ���ϴ� A+0 = A / 19 ���ϴ� A+1 = B / 29 ���ϴ� A+2 = C

}