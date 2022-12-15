#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
 * Return: none
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			while (i > 0)
			{
				printf(" ");
				i--;
			}
			printf("\\\n");
		}
	}
}

