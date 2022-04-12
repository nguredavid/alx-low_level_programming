#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack Bauer
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 00; hr < 24; hr++)
	{
		for (min = 00; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar('\n');
			_putchar('\n');
		}
	}
}
