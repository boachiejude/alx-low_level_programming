/**
 * _sqrt_recursion - uses recursion to determine the square root of a number
 * @n: number
 * @i: guess
 * Return: sqrt of n
**/
int _sqrt_recursion(int n, int i) {
	if (i)
	{
		if (i * i == n)
		{
			return i;
		}
		return _sqrt_recursion(n, i-1);
	}
	else
	{
		i = n;
	}
}
