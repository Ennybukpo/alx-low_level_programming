#include "main.h"

/**
 * 2-print_alphabet_x10.c prints 10x the alphabet
 *
 * in lower case
 *
 */
void print_alphabet_x10(void)
{
	int count = 0
	char alphabets;
	while (count++ <= 9)
{
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
	_putchar('\n');
}
}
