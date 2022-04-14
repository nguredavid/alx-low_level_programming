#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: c - variable
 * Return: always 0
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
