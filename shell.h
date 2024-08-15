#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

void initialize_shell(void);
void execute_command(char *cmd);
char **parse_command(char *cmd);
void free_args(char **args);
int handle_builtin(char **args);

void built_in_cd(char **args);
void built_in_exit(char **args);

#endif
