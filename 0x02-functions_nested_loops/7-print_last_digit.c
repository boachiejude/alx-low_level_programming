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

	n = _abs(n);
	last_digit = n % 10;
	return (last_digit * 11);
}
