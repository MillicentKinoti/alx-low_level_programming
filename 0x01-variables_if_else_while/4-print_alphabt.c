#include <stdio.h>

/**
* main - alphabets
* Description: prints all alphabets except q and e
* Return: 0
*/
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');
	return (0);
}
