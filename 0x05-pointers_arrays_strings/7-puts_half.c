#include"main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: void
*/

void puts_half(char *s)
{
	int index;
	int length = strlen(s);

	if (length % 2 == 1)
		length++;

	/*finds the length of string without null character*/
	for (index = (length / 2); index < length; ++index)
	{
		putchar(s[index]);
	}
	putchar('\n');
}
