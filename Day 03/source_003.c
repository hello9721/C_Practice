#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 실수의 표현

void main() {

	// 변수 선언

	float sub1, sub2, sub3, mean;
	float plus1, plus2, plus3, plus_mean;
	char pass[100];

	// 입력 받기

	printf("\n점수를 입력하세요. : ");
	scanf("%f", &sub1);

	printf("\n점수를 입력하세요. : ");
	scanf("%f", &sub2);

	printf("\n점수를 입력하세요. : ");
	scanf("%f", &sub3);

	// 부여될 점수로 변환

	plus1 = sub1 / 0.1;
	plus2 = sub2 / 0.1;
	plus3 = sub3 / 0.1;

	// 평균 내기

	mean = (sub1 + sub2 + sub3) / 3;
	plus_mean = (plus1 + plus2 + plus3) / 3;

	// 평균에 따라 다른 문자열을 pass에 입력하기

	if (mean >= 0.3) {
		strcpy(pass, "통과");
	}
	else {
		strcpy(pass, "탈락");
	}

	// 결과 출력

	printf("\n평균은 %.2f 이므로 %s 입니다.\n", mean, pass);
	printf("\n최종반영 될 경우 각각 %.1f 점, %.1f 점, %.1f 점이 부여되고 평균은 %.2f입니다.\n", plus1, plus2, plus3, plus_mean);


	// 실습 2

	float ten;

	ten = 0.1 * 0.1;
	
	if (ten == 0.01) {
		printf("\n%lf, %lf 는 같다.\n", ten, 0.01);
	}
	else {
		printf("\n%lf, %lf 은 다르다.\n", ten, 0.01);
	}

}