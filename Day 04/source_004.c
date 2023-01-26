#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;

	printf("\n>> ");
	scanf("%d %d", &a, &b);

	// 사칙연산자

	printf("\n가 => %d\n", a + b);
	printf("감 => %d\n", a - b);
	printf("승 => %d\n", a * b);
	printf("제 => %d\n", a / b);

	// 대입연산자

	a += b;
	a -= b;

	// 증감연산자

	// a--;							// a -= 1
	// a++;							// a += 1

	printf("\n> a = %d, b = %d\n", a, b);
	printf("\n(a-- + b) = %d\n", (a-- + b));		// a + b -> a = a - 1

	printf("\n> a = %d, b = %d\n", a, b);
	printf("\n(--a + b) = %d\n", (--a + b));		// a = a - 1 -> a + b

	printf("\n> a = %d, b = %d\n", a, b);

	// 나머지연산자

	int month = 0;

	printf("\n>> ");
	scanf("%d", &month);

	month = (month + 1) % 12;

	printf("\n다음달 => %d\n", month);

}