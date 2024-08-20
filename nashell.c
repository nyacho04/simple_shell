#include "shell.h"

int main (void)
{
	char *command;

	while (1)
	{
		display_prompt();
		command = read_command();
		free(command);
	}
	
	return(EXIT_SUCCESS);
	free(command);
}
