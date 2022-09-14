#include "main.h"

/**
 * print_alphabet_x10.c - prints 10 times the alphabet
 * File: 2-print_alphabet_x10.c
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count++ <=9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}

