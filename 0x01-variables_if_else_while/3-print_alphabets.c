#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints the alphabet in uppercase and lowercase
 *
 *Return: Always 0 (successful)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
