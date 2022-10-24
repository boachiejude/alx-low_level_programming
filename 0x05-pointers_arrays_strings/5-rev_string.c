#include"main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int index;
	int *a = *s;
	char b;
	*a = b;
	int len = strlen(s);

	for (index = 0;index < len; index--)
	{
		s[index] = a[len - index];
	}
}
