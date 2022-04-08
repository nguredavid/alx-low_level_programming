#include <stdio.h>
/**
 * main - main Function
 * Return: 0
 */
int main(void)
{
		char let;
		int num;

		for (num = 0; num < 10; num++)
		{
			putchar(num + '0');
		}
		for (let = 'a'; let < 'g'; let++)
		{
			putchar(let);
		}
			putchar('\n');

			return (0);
}
