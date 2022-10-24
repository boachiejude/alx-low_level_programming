#include "main.h"

/**
 * swap_int - function
 * @a: pointer to an integer variable a
 * @b: pointer to an integer variable b
 * Return: void
**/

void swap_int(int *a, int *b)
{
	int A, B;

	A = *a;
	B = *b;
	*b = A;
	*a = B;
}
