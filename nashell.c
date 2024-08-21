#include "shell.h"

int main (void)
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
	return(EXIT_SUCCESS);

}
