#include "main.h"
#include <ctype.h>

/**
 * islower: checks if a character is in lowercase
 * Description: function
 * Return: 0
**/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}