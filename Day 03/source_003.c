#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �Ǽ��� ǥ��

void main() {

	// ���� ����

	float sub1, sub2, sub3, mean;
	float plus1, plus2, plus3, plus_mean;
	char pass[100];

	// �Է� �ޱ�

	printf("\n������ �Է��ϼ���. : ");
	scanf("%f", &sub1);

	printf("\n������ �Է��ϼ���. : ");
	scanf("%f", &sub2);

	printf("\n������ �Է��ϼ���. : ");
	scanf("%f", &sub3);

	// �ο��� ������ ��ȯ

	plus1 = sub1 / 0.1;
	plus2 = sub2 / 0.1;
	plus3 = sub3 / 0.1;

	// ��� ����

	mean = (sub1 + sub2 + sub3) / 3;
	plus_mean = (plus1 + plus2 + plus3) / 3;

	// ��տ� ���� �ٸ� ���ڿ��� pass�� �Է��ϱ�

	if (mean >= 0.3) {
		strcpy(pass, "���");
	}
	else {
		strcpy(pass, "Ż��");
	}

	// ��� ���

	printf("\n����� %.2f �̹Ƿ� %s �Դϴ�.\n", mean, pass);
	printf("\n�����ݿ� �� ��� ���� %.1f ��, %.1f ��, %.1f ���� �ο��ǰ� ����� %.2f�Դϴ�.\n", plus1, plus2, plus3, plus_mean);


	// �ǽ� 2

	float ten;

	ten = 0.1 * 0.1;
	
	if (ten == 0.01) {
		printf("\n%lf, %lf �� ����.\n", ten, 0.01);
	}
	else {
		printf("\n%lf, %lf �� �ٸ���.\n", ten, 0.01);
	}

}