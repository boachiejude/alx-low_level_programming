/**
 * puts_recursion - prints a string with recursion
 * @s: the string to print
 * Return: None
**/
void puts_recursion(char *s)
{
	if (*s)
	{
		printf("%c", *s);
		printString(s + 1);
	}
}
