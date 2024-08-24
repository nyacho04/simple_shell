#include "shell.h"
/**
 * main - loop of the shell
 *
 * Return: always EXIT_SUCCESS.
 */
int main(void)
{
	char *command;

	while (1)
{
	    display_prompt();
	command = read_command();

	if (strcmp(command, "exit\n") == 0)
	{
		free(command);
		break;
	}

	execute_command(command);
	free(command);
}

	return (EXIT_SUCCESS);
}
