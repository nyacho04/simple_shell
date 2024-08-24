#include "shell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * find_command_in_path - search the command in the PATH directory
 * @command: the command to search
 *
 * Return: The full path if the command is found, or NULL if not found.
 */
char *find_command_in_path(char *command)
{
char *path = getenv("PATH");
char *dir;
char *full_path;
char *path_copy;

	if (path == NULL)
	{
		return (NULL);
	}

	path_copy = strdup(path);
	if (path_copy == NULL)
	{
		return (NULL);
	}

	dir = strtok(path_copy, ":");
	while (dir != NULL)
	{
	full_path = malloc(strlen(dir) + strlen(command) + 2);
	if (full_path == NULL)
	{
		free(path_copy);
		return (NULL);
	}

	sprintf(full_path, "%s/%s", dir, command);
	if (access(full_path, X_OK) == 0)
	{
		free(path_copy);
		return (full_path);
	}

	free(full_path);
	dir = strtok(NULL, ":");
	}

	free(path_copy);
	return (NULL);
}
