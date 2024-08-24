#include "shell.h"
/**
 * read_command - it reads it reads the commandd
 *
 * Return: void
 */
char *read_command(void)
{
	char *command = NULL;
	size_t BUFFER_SIZE = 0;

	if (getline(&command, &BUFFER_SIZE, stdin) == -1)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}

	return (command);

}
