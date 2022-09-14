#include "main.h"

/**
 * function _islower -  Checks if a characte is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 if otherwise.
 *
 * File: 3-islower.c
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
