#include "../main.h"
#include <stdio.h>

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isuper(c));
	c = 'a';
	printf("%c: %d\n", c, _isuper(c));
	return (0);
}
