#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if a character is in uppercase
 * Description: function
 *  @c: input for an integer
 *  Return: 1, 0 if lower or upper respectively
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
