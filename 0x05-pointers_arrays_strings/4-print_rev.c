#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int o;
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
