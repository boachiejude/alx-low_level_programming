#include <stdio.h>
/**
 * _print_rev_recursion - prints a string with recursion
 * @s: the string to print
 * Return: None
**/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
	else
	printf("\n");
	return;
}
