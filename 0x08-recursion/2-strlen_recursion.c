#include "main.h"

/**
 * _strlen_recursion - entry pt
 * @s: input
 * Return: return output
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
