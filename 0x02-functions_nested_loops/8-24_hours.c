#include "main.h"

/**
 * jack_bauer -> prints 24 hours
 * Description: Prints every hour and minute in one day
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; m < 60; m++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
