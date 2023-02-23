#include "main.h"
/**
 *print_most_numbers - prints all numbers except 2 and 4
 */
void print_most_numbers(void)
{
char num = 48;

	while (num <= 57)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
