#include "main.h"

/**
 * print_array - prints comma-separated elements of an array
 * @a: array
 * @n: number of a elements to print
 * Return: void
**/

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int b = a[i];
		
		printf("%d", b);
	}
}
