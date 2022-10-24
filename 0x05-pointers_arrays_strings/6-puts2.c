#include"main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void puts2(char *s)
{
	int index;

	/*finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print char from the last index as you decrement*/
	for (--index; index >= 0; --index)
	{
		if (index % 2 == 0)
		{
			continue;
		}
		putchar(s[index]);
	}
	putchar('\n');
}
