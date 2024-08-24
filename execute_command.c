#include "shell.h"
/**
 * execute_command - Executes a command using execve.
 * @command: The command to execute.
 *
 * Return: void
 */
void execute_command(char *command)
{
pid_t pid;
char *args[2];
char *command_path = NULL;

	size_t len = strlen(command);
if (len > 0 && command[len - 1] == '\n')
	command[len - 1] = '\0';

if (strchr(command, '/') == NULL)
{
	command_path = find_command_in_path(command);
if (command_path == NULL)
{
	fprintf(stderr, "command not found: %s\n", command);
	return;
}
}
	else
{
	command_path = command;
}

	args[0] = command_path;
	args[1] = NULL;

	pid = fork();

if (pid == -1)
{
	perror("failed fork");
	exit(EXIT_FAILURE);
}
	else if (pid == 0)
{
	extern char **environ;
if (execve(command_path, args, environ) == -1)
{
	perror("command execute failed");
	exit(EXIT_FAILURE);
}
}
	else
{
	waitpid(pid, NULL, 0);

	if (command_path != command)
		free(command_path);
}
}
