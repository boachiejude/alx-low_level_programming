#include "main.h"
#include <stdio.h>

/**
 * times_table - func
 * Description: prints all the times tables up to 9
 * Returns: None
*/

void times_table()
{
	int i;
	int j;
	int m;
	
	for (i = 0; i <= 98; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			m = i *j;
			printf("%d", m);
		};
		if (i != 9)
		{
			printf("\n");
		};
	}
}
