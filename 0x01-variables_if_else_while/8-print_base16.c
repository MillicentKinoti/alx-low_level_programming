#include <stdio.h>

/**
* main - prints numbers
* Description: prints all the numbers 16 in lowercase
* Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);

	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
