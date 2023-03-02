#include "main.h"
/**
 * _strncpy - copies two strings
 * @dest: src string is appended to it
 * @src: gets appended to dest string
 * @n: Number of bytes of src to be concatenated with dest
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
