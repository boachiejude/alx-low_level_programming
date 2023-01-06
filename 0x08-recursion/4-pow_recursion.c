/**
 * _pow_recursion - uses recursion to raise x to the power of y
 * @x: base
 * @y: power
 * Return: x**y
**/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
