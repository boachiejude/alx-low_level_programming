#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed and printed
 * Return: void
**/

void print_rev(char *s)
{
	int length = strlen(s);
	int i = 0;

	while (length)
	{
		printf("%s", s[length - i]);
		i++;
	}
}
