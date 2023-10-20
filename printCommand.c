#include "shell.h"
/**
 * printCommand - Function to take users input
 * @env: environment variable
 * Return: return number of characters printed from the standard input
 */

int printCommand(char **env)
{
	size_t n = 0;
	char *buff = NULL, *command, *argsC[MAX_ARG];
	int size;

	size = getline(&buff, &n, stdin);
	if (size == -1)
	{
		if (feof(stdin))
		{
			free(buff);
			exit(0);
		}
		else
		{
			perror("Failed to read user input");
			free(buff);
		}
	}

	if (space(buff))
		;
	else
	{
		command = removeNchar(buff, size);
		tokenize(command, argsC);
		execMd(argsC, env);
	}

	free(buff);
	return (size);
}
