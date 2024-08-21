#include "shell.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void execute_command(char *command)
{
	char **args = malloc(2 * sizeof(char *));
	pid_t pid;

	if (args == NULL)	
	{
		perror("failed malloc");
		exit(EXIT_FAILURE);
	}

	args[0] = command;
	args[1] = NULL;

	pid = fork();

	if (pid == -1)
	{
		perror("failed fork");
		free(args);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		extern char **environ;
		if (execve(command, args, environ) == -1)
		{
			perror("command execute failed");
			free(args);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, NULL, 0);
		free(args);
	}
}
