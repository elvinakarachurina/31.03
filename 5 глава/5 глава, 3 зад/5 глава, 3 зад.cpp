// 5 глава, 3 зад.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
int n = 5;
int triangularNumber;



int main()
{
	while (n <= 50)
	{
		triangularNumber = n * (n + 1) / 2;
		printf("%d\n", triangularNumber);
		n=n + 5;
	}
    return 0;
}

