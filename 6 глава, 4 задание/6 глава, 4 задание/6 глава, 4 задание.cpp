// 6 глава, 4 задание.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	float res = 0, v;
	char oper;

	printf("Type your expression\n");
	while (oper != 'E') {
		scanf_s("%f %c", &v, &oper);
		switch (oper) {
		case 'S':
			res = v;
			break;
		case '+':
			res += v;
			break;
		case '-':
			res -= v;
			break;
		case '*':
			res *= v;
			break;
		case '/':
			if (v == 0)
				printf("Error\n");
			else
				res /= v;
			break;
		default:
			printf("Error\n");
		}
		printf("= %f\n", res);
	}
	return 0;
}