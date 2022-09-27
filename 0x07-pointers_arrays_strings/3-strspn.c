#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: segment of string to be scanned
 * @accept: string that contains list of character to be matched
 * Return: count
 **/

unsigned int _strspn(char *s, char *accept)

{

	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0') /*Declaring WHILE *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Declaring WHILE *accept*/
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;    /*add j+1*/
		}

		if (s[i] != accept[j]) /*If its not equal*/
		{
			break;
		}

		i++; /*add x+1*/
	}

	return (count); /*return the value of count*/
}
