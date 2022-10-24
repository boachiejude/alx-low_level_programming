#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string from source to destination
 * @src: source string
 * @dest: destination string
 * Return: 0 successful
**/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
