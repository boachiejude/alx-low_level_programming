#include "main.h"
#include <ctype.h>

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
