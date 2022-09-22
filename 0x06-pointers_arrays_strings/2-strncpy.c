#include "main.h"

/**
 * _strncpy - is a function that copies a string.
 *
 * @src: the source string that would be appended to dest
 *
 * @dest: the string that would be concatenated
 *
 * @n: is a number
 *
 * Return:pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
