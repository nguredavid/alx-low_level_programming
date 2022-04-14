#include "main.h"
/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; 1++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
		else
		_putchar('\n');
}
