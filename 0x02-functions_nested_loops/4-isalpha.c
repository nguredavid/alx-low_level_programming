#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: takes in a charater
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
