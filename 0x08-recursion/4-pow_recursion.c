/**
 * _pow_recursion - uses recursion to raise x to the power of y
 * @x: base
 * @y: power
 * Return: x**y
**/
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
