#include "main.h"
/**
* print_diagonal - print a diagonal line
* @n: length of line
* Description: draws a diagonal line on the terminal
*/
void print_diagonal(int n)
{
	int x = 0, y;

	if (n > 0)
	{
		while (x < n)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');

			x++;
		}
	}
	else
		_putchar('\n');
}
