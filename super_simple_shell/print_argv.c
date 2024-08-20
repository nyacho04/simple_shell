#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - ac, av
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	while (*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
