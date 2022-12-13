#include "main.h"
#include <ctype.h>
/**
 * _isalpha: checks if a function is a letter
 * Description: function
 * @c: input for an integer value
 * Return: 1 if the input is a letter
*/
int _isalpha(int c)
{
	if (islower(c) || isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
