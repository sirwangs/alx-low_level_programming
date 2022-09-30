#include "main.h"

/**
 * _strcmp - is a function that compares two strings.
 *
 * @s1: a pointer to the first string to be compared.
 *
 * @s2: A pointer to the second string to be compared
 *
 * Return: res.
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		res = *s1 - *s2;

	return (res);
}
