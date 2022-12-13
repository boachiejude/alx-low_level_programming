#include "main.h"
#include <ctype.h>

/**
 * _isupper: checks if a character is in uppercase
 * Description: function
 *  @c: input for an integer
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
