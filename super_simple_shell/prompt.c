#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");
	read = getline(&line, &len, stdin);

	if (read == -1)
	{
		perror("getline");
		free(line);
		exit(EXIT_FAILURE);
	}
	printf("%s", line);
	{
		free(line);
		return (0);
	}
}
