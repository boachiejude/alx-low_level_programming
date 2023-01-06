int abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

/**
 * _sqrt_recursion - uses recursion to determine the square root of a number
 * @n: number
 * @i: current guess of the square root
 * @p: precision
 * Return: sqrt of n
**/
int _sqrt_recursion(int n, int i, int p) {
   if (abs(i * i - n) < p) {
	  return i;
   }
   int nextGuess = (n / i + i) / 2;
   return _sqrt_recursion(n, nextGuess, p);
}
