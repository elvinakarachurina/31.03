// 5 глава, зад.5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main(void)
{
	int n, a;
	printf("TABLE OF POWERS OF TWO\n\n");
	printf(" n 2 to the n\n");
	printf("-- --------------\n");
	a = 1;
	for (n = 0; n <= 10; ++n)
	{
		printf("%2i %i\n", n, a);
		a *= 2;
	}
    return 0;
}

