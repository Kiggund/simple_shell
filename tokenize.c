#include "shell.h"

/**
 * tokenize - The function to help tokenize user input
 * @command: The command received from the user
 * @argsC: The file for tokens
 * Return: return the number of tokens
 */

int tokenize(char *command, char *argsC[])
{
	char *delim = " ", *token;
	int count = 0;
	token = strtok(command, delim);

	while (token)
	{
		argsC[count++] = token;
		token = strtok(NULL, delim);
	}

	argsC[count] = NULL;

	return (count);
}
