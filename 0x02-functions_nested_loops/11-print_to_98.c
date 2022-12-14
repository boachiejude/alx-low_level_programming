#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - func
 * Description: prints all natural numbers from n to 100
 * @n: starting integer
 * Return: None
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			};
		}
		printf("\n");
	};
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			};
		}
		printf("\n");
	};
}
