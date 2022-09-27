#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: the string
 * @accept: characters in str1 tha match str2
 * Return: string that matches characters resent in s
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
