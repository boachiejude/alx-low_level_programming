#include <stdio.h>

/**
 * reverse_array - reverse is an array, a of n elements
 * @a: array
 * @n: int
 * Return: none
**/

void reverse_array(int *a, int n)
{
	int i, ch;

	/*swap the string by looping to half the string*/
	for (i = 0; i < n / 2; ++i)
	{
		ch = a[i];
		a[i] = a[n - 1 - i]; /*-1 because the array starts from 0*/
		a[n - 1 - i] = ch;
	}
}
