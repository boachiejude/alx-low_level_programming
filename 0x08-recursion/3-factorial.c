#include <stdio.h>
/**
 * factorial - uses recursion to determine the factorial of a number
 * @n: number n
 * Return: factorial of n
**/
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else
	{
		if (n == 1)
		{
			return (1);
		}
		else
		{
		return (n * factorial(n - 1));
		}
	}
}
