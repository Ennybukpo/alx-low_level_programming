#include "main.h"

/**
 * main - print_alphabet
 * print_alphabet -prints alphabet in lower case, followed by new line
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
