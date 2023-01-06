#include <stdio.h>
/**
 * _strlen_recursion - uses recursion to determine the length of a string
 * @s: the string to print
 * Return: length of s
**/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
