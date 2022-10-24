#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that prints the length of a string
 * @s: char variable
 * Return: 0
**/

int _strlen(char *s)
{
	int len;

	len = strlen(s);
	printf("stlen(str1) :  %d\n", len );
	return (0);
}
