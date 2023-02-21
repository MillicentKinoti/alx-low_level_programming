#include "main.h"
/**
* jack_bauer - prints a 24 hour timer
* Description: prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{
	int hour;
	int x;

	hour = 0;

	while (hour < 24)
	{
		for (x = 0; x < 60; x++)
		{
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar(':');
			_putchar(x / 10 + 48);
			_putchar(x % 10 + 48);
			_putchar('\n');
		}
		hour++;
	}
}