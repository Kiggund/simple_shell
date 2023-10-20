#include "shell.h"

/**
 * execMd - The function to execute user input
 * @argsC: it is an array of commands from the user input
 * Return: return 0 on success
 */

int execMd(char *argsC[])
{
	pid_t pid;
	int exe, status;

	pid = fork();

	if (pid == -1)
	{
		perror("Failed to create a process");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		exe = execve(argsC[0], argsC, NULL);
		if (exe == -1)
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);

	return (0);
}
