#include <stdio.h>
/**
 * _puts_recursion - prints a string with recursion
 * @s: the string to print
 * Return: None
**/
void _puts_recursion(char *s)
{
	if (*s)
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
	else
	printf("\n");
}
