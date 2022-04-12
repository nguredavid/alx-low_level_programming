#include "main.h"
/**
 * _islower - urns lowercase if cap
 * @c: takes in a character
 * Return: 0 if lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
