#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: count args
 * @argv: args
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{

	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - prints each args*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
