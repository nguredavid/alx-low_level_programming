#include "main.h"
/**
 *
 */
void print_alphabet_x10(void);
{
	char alp;
	int a;
	for (a = 1; a < 10; a++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
