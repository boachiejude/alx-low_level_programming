#include "main.h"

/**
 * _abs - func
 * Description: gets the abs value
 * @n: integer input
 * Return: abs value of n
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
/**
 * print_last_digit - func
 * Description: returns the last digit of a number
 * @n: number
 * Return: last digit of the number
*/

int print_last_digit(int n)
{
	_putchar('0' + (_abs(n % 10)));
	return (_abs(n % 10));
}
