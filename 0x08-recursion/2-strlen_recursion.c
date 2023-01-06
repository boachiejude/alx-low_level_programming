#include <stdio.h>
/**
 * _strlen_recursion - uses 
 * @s: the string to print
 * Return: length of s
**/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
