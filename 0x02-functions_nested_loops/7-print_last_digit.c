#include "main.h"

/**
 * print_last_digit - func
 * Description: returns the last digit of a number
 * @n: number
 * Return: last digit of the number
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	if (n == 0)
	{
		return (00);
	};
	_putchar('0' + (n % 10));
	return ((n % 10));
}
