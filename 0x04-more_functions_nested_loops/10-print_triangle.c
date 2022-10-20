#include <stdio.h>

/**
 * print_triangle: Triangles
 * Description: prints triangles
 * @size: size of the triangle lol
 * Return: 0 - successful
**/
void print_triangle(int size)
{
	for (int i = 0; i < size; i++)
	{
		int j;
		
		j = i;
		
		while (size - i)
		{
			printf(" ");
		}
		while (i--)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
