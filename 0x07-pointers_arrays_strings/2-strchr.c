#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s ==  c*/
		{
			return (s); /*return s*/
		}

		++s;

	}

	if (*s == c)
	{
		return (s);

	}


	return (0);/* values null*/
}
