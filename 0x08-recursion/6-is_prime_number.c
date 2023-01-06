/**
 * is_prime_number - determines if the number is a prime number
 * @n: number
 * @i: indexer
 * Return: boolean indicating whether the number is prime or not
*/
int is_prime_number(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number(n, i - 1));
}
