#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string parameter input
 * 
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
