// Пратт 3 задач.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int i = 0;
	int j=0;
	int n=8;
	
	while (n != 0)
	{
		scanf_s("%d", &n);
		if (n % 2 == 0)
		{
			i++;
		}
		if (n % 2 == 1)
		{
			j++;
		}
		
	}
	printf("chet=%d\n", i);
		printf("nechet=%d\n", j);
    return 0;
}

