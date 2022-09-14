#include  "main.h"
/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ptc[] = "_putchar";

	int d;

	for (d = 0; d < 8; d++)
	{
		_putchar(ptc[d]);
	}
	_putchar('\n');
	return (0);
}
