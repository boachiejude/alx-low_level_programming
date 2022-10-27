#include "main.h"
#include <string.h>

/**
 * _strncpy - func
 * @dest: destination string
 * @src: source string
 * @n: n bytes to copy
 * Return: char
**/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
