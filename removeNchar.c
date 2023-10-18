#include "shell.h"

/**
 * removeNchar - The function to remove a newline character from user input
 * @str: The user input
 * @len: The length of the user input
 * Return: return the command without a newline character at the end
 */

char *removeNchar(char *str, int len)
{
	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';

	return (str);
}
