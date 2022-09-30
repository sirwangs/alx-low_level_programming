#include "main.h"
#include <string.h>

/**
 * _strncat - is a function that concatenates two strings.
 *
 * @src: the source string that would be appended to dest
 *
 * @dest: the string that would be concatenated
 *
 * @n: is a number
 *
 * Return:pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
