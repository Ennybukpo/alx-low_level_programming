#include "main.h"
/**
 * prints the alphabet, in lowercase
 *
 * followed by a new line
 */
void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		_putchar(alphabets);
	_putchar('\n');

}
