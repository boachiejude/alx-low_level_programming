#include "main.h"
#include <stdio.h>

/**
 * times_table - func
 * Description: prints all the times tables up to 9
 * Returns: 0 successful
*/

int times_table()
{
	for (int i = 0; i <= 98; i++)
	{
		for (int j = 0; j <= 12; j++)
		{
			printf(i *j);
		};
		if (i != 9)
		{
			printf("\n");
		};
	}
}
