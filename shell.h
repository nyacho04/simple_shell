#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

char *read_command();
void display_prompt(void);
int shell_error(void);
void execute_command(char *command);
char *find_command_in_path(char *command);

#endif
