#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the char to print
 *
 * Return: on success 1.
 * On error, -1 is returned and error set properly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}