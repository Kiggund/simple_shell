#include "shell.h"

/**
 * execMd - The function to execute user input
 * @argsC: it is an array of commands from the user input
 * Return: return 0 on success
 */

int execMd(char *argsC[])
{
	pid_t pid;
	int exe;

	pid = fork();

	if (pid == -1)
	{
		perror("Failed to create a process");
	}
	else if (pid == 0)
	{
		exe = execve(argsC[0], argsC, NULL);
		if (exe == -1)
		{
			perror("Error executing command");
		}
	}
	else
		wait(&status);

	return(0);
}
