#include "main.h"
#include <stdio.h>

/**
 * _strcat - is a function that concatenates two strings.
 *
 * @src: the source string that would be appended to dest
 *
 * @dest: the string that would be concatenated
 *
 * Return:pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
