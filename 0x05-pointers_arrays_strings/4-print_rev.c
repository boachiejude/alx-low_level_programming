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
	strrev(s);
	printf("%d\n", s);
}
