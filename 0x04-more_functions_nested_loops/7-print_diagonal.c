#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			while (i > 0)
			{
				_putchar(" ");
				i--;
			}
			_putchar("\\");
		}
	}
}
