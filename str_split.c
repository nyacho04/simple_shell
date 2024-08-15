#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_split - Splits a string
 * @str: The string that will be splited
 * 
 * Return: On success, it returns the new array
 * of strings. On failure, it returns NULL
 */
char **str_split(char *str)
{
	char **array = NULL;
	char *token = NULL;
	int count = 0;

	token = strtok(str, " ");
	while (token != NULL)
	{
	array = realloc(array, (count + 1) * sizeof(char *));
	array[count] = token;
	count++;
	token = strtok(NULL, " ");
	}
	array = realloc(array, (count + 1) *sizeof(char *));
	array[count] = NULL;
}

