/**
 * print_diagonal: yeah...you get it
 * @n: n diagonals
 * Description: description...
 * Return: 0 successful
**/
void print_diagonal(int n)
{
	if (n <=0)
	{
		_putchar("\n");
	}
	else
	{
		for (int i = 1; i < n; i++)
		{
			_putchar(" ");
		}
		_putchar("\\$\n");
	}
}
