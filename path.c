#include "shell.h"

/**
 * path - provide teh command path
 * @args: command from user
 * Return: return command or NULL
 */

char *path(char *args)
{
	char *pt_cp, *cmd, *exe, *dir, *delim = ":";
	char *pt = getenv("PATH");

	if (pt)
	{
		if (access(args, X_OK) == 0)
			return (args);
		pt_cp = pt;
		dir = strtok(pt_cp, delim);

		while (dir)
		{
			exe = Scat(dir, args);
			if (access(exe, X_OK) == 0)
			{
				cmd = exe;
				return (cmd);
				free(exe);
			}
			free(exe);
			dir = strtok(NULL, delim);
		}
	}
	return (NULL);
}
