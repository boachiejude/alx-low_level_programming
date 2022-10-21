#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
 * Return: 0 - success
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			while (i > 0)
			{
				printf(" ");
				i--;
			}
			printf("\\");
		}
	}
}

