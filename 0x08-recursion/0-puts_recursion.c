#include "main.h"
/**
 * _puts_recursion - supposed to print a spring
 * @s: source string
 * Return: return printed string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
