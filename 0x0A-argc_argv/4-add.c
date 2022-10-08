#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main func
 * @argv: pointer
 * @argc: counter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
