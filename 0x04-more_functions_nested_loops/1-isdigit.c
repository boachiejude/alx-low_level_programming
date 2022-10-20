/**
 * _isdigit - checks if c is a digit
 * @c: input for digitor otherwise
 * Description: description
 * Return: 1 if c is digit or 0 if otherwise
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
