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
	if (array == NULL)
	{
	perror("realloc");
	exit(EXIT_FAILURE);
	}
	array[count] = strdup(token);
	if (array[count] == NULL)
	{
	perror("strdup");
	exit(EXIT_FAILURE);
	}
	count++;
	token = strtok(NULL, " ");
	}

	array = realloc(array, (count + 1) * sizeof(char *));
	if (array == NULL)
	{
		perror("realloc");
		exit(EXIT_FAILURE);
	}
	array[count] = NULL;

	return (array);
}
/**
 * main - example
 *
 * Return: Always 0.
 */
int main()
{
	char str[] = "mi debilidad es el conjunto de la psg";
	char **array = str_split(str);

	for (int n = 0; array[n] != NULL; n++)
	{
		printf("%s\n", array[n]);
		free(array[n]);
	}
	free(array);
	return (0);
}
