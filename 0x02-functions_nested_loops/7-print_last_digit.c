#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - func
 * Description: returns the last digit of a number
 * @n: number
 * Returns: last digit of the number
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n *= -1;
	}
	if (n == 0)
	{
		return (00);
	};
	last_digit = n % 10;
	last_digit *= 11;
	printf("%d", last_digit);
	return (last_digit);
}
