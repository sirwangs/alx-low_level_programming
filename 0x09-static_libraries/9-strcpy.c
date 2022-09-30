#include "main.h"

/**
 *_strcpy - copies the string pointed to by src, including \0.
 * it copies the string that the pointer 'src' points to, to *
 * the buffer which 'dest' points to.
 * @src: pointer.
 *
 * @dest: pointer.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
