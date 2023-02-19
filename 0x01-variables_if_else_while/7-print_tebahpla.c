#include <stdio.h>

/**
* main - alphabets lowercase
* Description: prints all lowers alphabets in reverse
* Return: 0
*/
int main(void)
{

	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
putchar('\n');
	return (0);
}
