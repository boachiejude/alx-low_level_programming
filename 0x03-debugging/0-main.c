#include <stdio.h>

/**
 * main - causes an infinite loop
 * Description: description
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 98 % 2;

	/**
	 * while (i < 10)
	 * {
	 *	putchar(i);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
