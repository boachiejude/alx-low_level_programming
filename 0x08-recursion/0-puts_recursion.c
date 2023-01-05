/**
 * puts_recursion - prints a string with recursion
 * @s: the string to print
 * @i: index keeper variable
 * Return: None
**/
void puts_recursion(char *s, int i)
{
	_putchar(s[i]);
	puts_recursion(s, i - 1);
}
