#include "main.h"
/**
 * _print_rev_recursion - entry pt
 * @s: input
 * Return: Return 0 success
 */
void _print_rev_recursion(char *s)
{
		if (*s != '\0')
			_print_rev_recursion(s + 1);
		else
			return;
		_putchar(*s);
}

