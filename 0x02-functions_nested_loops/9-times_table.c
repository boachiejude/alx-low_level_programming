#include "main.h"
#include <stdio.h>

/**
 * times_table - func
 * Description: prints all the times tables up to 9
 * Returns: None
*/

void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (m <= 9)
			{
				printf("  %d", m);
			}
			else
			{
				printf(" %d", m);
			}
			if (j != 9)
			{
				printf(",");
			};
		};
		if (i != 9)
		{
			printf("\n");
		};
	}
}
