#include "shell.h"
/**
 * space - function to check for space
 * @sre: the inout from the user
 * Return: return true if all char is a space
 */

bool space(char *sre)
{
	while (*sre)
	{
		if (!_isspace(*sre))
			return (false);
		sre++;
	}
	return (true);
}

/**
 * _isspace - function to check if a char is a space
 * @cha: character to be checked
 * Return: return 0 if it is a space
 */

int _isspace(int cha)
{
	return (cha == ' ' || cha == '\n' || cha == '\t' || cha == '\v');
}
