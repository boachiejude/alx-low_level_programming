#include <stdio.h>
/**
 * _print_rev_recursion - prints a string with recursion
 * @s: the string to print
 * Return: None
**/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
