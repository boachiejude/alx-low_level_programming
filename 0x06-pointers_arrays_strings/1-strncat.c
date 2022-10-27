#include "main.h"
#include <string.h>

/**
 * _strncat - func
 * @dest: destination string
 * @src: source string
 * @n: n bytes to use
 * Return: @dest
**/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (*dest);
}
