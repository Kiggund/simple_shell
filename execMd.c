#include "shell.h"

/**
 * execMd - The function to execute user input
 * @argsC: it is an array of commands from the user input
 * @env: environment variable
 * Return: return 0 on success
 */

int execMd(char *argsC[], char **env)
{
	pid_t pid;
	int exe, status;
	char *cmd;

	pid = fork();

	if (pid == -1)
	{
		perror("Failed to create a process");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		cmd = path(argsC[0]);
		exe = execve(cmd, argsC, env);
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
