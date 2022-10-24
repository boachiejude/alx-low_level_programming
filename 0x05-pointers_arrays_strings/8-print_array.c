#include "main.h"
#include <stdio.h>

/**
 * print_array - prints comma-separated elements of an array
 * @a: array
 * @n: number of a elements to print
 * Return: void
**/

void print_array(int *a, int n)
{
	int b, i;

	if (n < 0)
	{
		printf("\n");
	}
	else
	{
		/* Loops through the array */
		for (i = 0; i < n; i++)
		{
			b = a[i];

			printf("%d", b);
			if (i == (n - 1))
			{
				break;
			};
			printf(", ");
		};
		printf("\n");
	}
}
