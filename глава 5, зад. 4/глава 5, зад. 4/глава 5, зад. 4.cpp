// глава 5, зад. 4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
int n = 1;
int a = 1;


int main()
{
	printf("Table of factorials\n");
	printf("---  ---------\n");
	while (n <= 10)
	{
		a = a * n;
		printf("%d      %d\n", n, a);
		n++;
	}

    return 0;
}

