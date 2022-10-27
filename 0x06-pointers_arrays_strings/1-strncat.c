#include "main.h"
#include <string.h>

/**
 * _strncat - func
 * @dest: destination string
 * @src: source string
 * @n: n bytes to use
 * Return: char
**/

char *_strcat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
