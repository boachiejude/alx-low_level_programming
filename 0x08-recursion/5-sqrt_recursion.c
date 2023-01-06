/**
 * _sqrt_recursion - uses recursion to determine the square root of a number
 * @n: number
 * @i: current guess of the square root
 * Return: sqrt of n
**/
int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return i;
	}
	if ((i * i) > n)
	{
		return i - 1;
	}
	return _sqrt_recursion(n, i + 1);
}
