#include "main.h"
/**
 * jack_bauer -  prints time in min. for 24 hours
 *
 *
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; M < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
