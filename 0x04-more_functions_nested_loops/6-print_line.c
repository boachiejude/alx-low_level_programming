#include <stdio.h>

/**
 * print_line - prints lines
 * @n: number of underscores to print
 * Description: prints lines ugh
 * Return: 0 success
**/
void print_line(int n)
{
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			printf("_");
		}
	}
}
