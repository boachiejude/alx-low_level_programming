#include"main.h"

/**
 * print_alphabet - uses the printchar function to print alphabet a -z
 * Description: alphabet game
 * Return: 0 successful
*/

void print_alphabet(void)
{
	int ch;

	int iter;
	iter = 0;

	while (iter <10)
	{
			for (ch = 'a'; ch <= 'z'; ++ch)
				_putchar(ch);
			_putchar('\n');
			iter++;
	}
}
