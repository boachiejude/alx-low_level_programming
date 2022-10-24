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

	for (int i = 0;i < length; i++)
	{
		printf("%s", s[length - i]);
	};
	printf("\n");
}
