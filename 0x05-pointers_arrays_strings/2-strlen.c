#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s += 1;

	}
	return (len);
}
