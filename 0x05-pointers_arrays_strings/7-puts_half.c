#include"main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *s)
{
	int index;
	int length = strlen(s);

	/*finds the length of string without null character*/
	for (index = 0; index > (length / 2); ++index)
	{
		putchar(s[index]);
	}
	putchar('\n');
}
