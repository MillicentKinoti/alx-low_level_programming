#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143.
 *Return: Always 0.
 */
int main(void)
{
long prime_num = 612852475143, i;

	while (i < (prime_num / 2))
	{
		if ((prime_num % 2) == 0)
		{
			prime_num /= 2;
			continue;
		}

		for (i = 3; i < (prime_num / 2); i += 2)
		{
			if ((prime_num % i) == 0)
				prime_num /= i;
		}
	}

	printf("%ld\n", prime_num);

	return (0);
}
