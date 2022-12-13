#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_sign - function
 * Description: checks for the sign on n
 * @n: input for an integer
 * Return: +, 1 if positive, -, -1 if negative and 0, 0 if 0
*/
int print_sign(int n)
{
	if (n > 0)
		printf("+");
	    return (1);
    if (n < 0)
		printf("-");
	    return (-1);
	printf("0");
    return (0);
}
