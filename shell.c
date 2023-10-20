#include "shell.h"

/**
 * main - starting point
 * @ac: argument count
 * @env: environment variable
 * Return: return 0 on success
 */

int main(int ac, char **env)
{
	(void) ac;

	while (1)
	{
		if (isatty(0))
			write(STDOUT_FILENO, PROMPT, _strlen(PROMPT));
		printCommand(env);
	}
	return (0);
}
