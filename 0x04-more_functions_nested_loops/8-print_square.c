/**
 * print_square: you are so much sunshine in every square inch
 * Description: prints squares of #
 * @size: the size of the square to print
 * Return: 0 - success
**/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			for (int i = 0; i < size; i++)
			{
				_putchar("#");
			};
			_putchar("\n");			
		}
	}
}
