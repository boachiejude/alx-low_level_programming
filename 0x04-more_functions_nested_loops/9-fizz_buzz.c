#include <stdio.h>

/**
 * main: the fizz buzz function
 * Description: 1 - 100 fizz for threes and buzz for fives
 * Return: 0 - successful
**/
int main(void)
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf(i);
		}
	}
}
