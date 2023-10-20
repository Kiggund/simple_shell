#include "shell.h"
/**
 * printCommand - Function to take users input
 *
 * Return: return number of characters printed from the standard input
 */

int printCommand(void)
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

	command = removeNchar(buff, size);
	tokenize(command, argsC);
	execMd(argsC);

	free(buff);
	return (size);
}
