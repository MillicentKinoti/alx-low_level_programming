#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int len;
int i;
for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');

}
