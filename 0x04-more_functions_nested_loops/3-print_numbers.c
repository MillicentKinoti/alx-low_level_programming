#include "main.h"
#include <stdio.h>
/**
 * print_numbers  - print numbers from 0 to 9
*/
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
}
