#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;

	printf("\n>> ");
	scanf("%d %d", &a, &b);

	// ��Ģ������

	printf("\n�� => %d\n", a + b);
	printf("�� => %d\n", a - b);
	printf("�� => %d\n", a * b);
	printf("�� => %d\n", a / b);

	// ���Կ�����

	a += b;
	a -= b;

	// ����������

	// a--;							// a -= 1
	// a++;							// a += 1

	printf("\n> a = %d, b = %d\n", a, b);
	printf("\n(a-- + b) = %d\n", (a-- + b));		// a + b -> a = a - 1

	printf("\n> a = %d, b = %d\n", a, b);
	printf("\n(--a + b) = %d\n", (--a + b));		// a = a - 1 -> a + b

	printf("\n> a = %d, b = %d\n", a, b);

	// ������������

	int month = 0;

	printf("\n>> ");
	scanf("%d", &month);

	month = (month + 1) % 12;

	printf("\n������ => %d\n", month);

}