#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the char
 *
 * Return: on sucess 1.
 * on error, -1, and error is set correctly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
