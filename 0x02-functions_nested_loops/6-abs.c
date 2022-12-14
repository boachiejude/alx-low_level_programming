#include "main.h"
#include <stdio.h>

/**
 * _abs - func
 * Description: computes abs value
 * @r: input integer
 * Return: abs value or r
*/
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
