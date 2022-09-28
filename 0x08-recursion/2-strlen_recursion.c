#include "main.h"
/**
 * _strlen_recursion - print length of string
 * @s: pointer block of memory to fill
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{

	/*Base condition*/
	if (*s == '\0')
		return (0);

	else
	return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}