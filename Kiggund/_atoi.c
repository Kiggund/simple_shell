#include "shell.h"
#define MAX_READFD 2
#include <string.h>
/**
* interactive - returns true if shell is interactive mode
* @info: struct address
*
* Return: 1 if interactive mode, 0 otherwise
*/
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) & info->readfd <= MAX_READFD);
}
/**
* is_delim - checks if character is a delimeter
* @c: the char to check
* @delim: string of delimiters
* Return: 1 if c is a delimter, 0 otherwise
*/
int is_delim(char c, char *delim)
{
	return (strchr(delim, c) != NULL);
}
/**
* is_delim - checks if character is a delimeter
* @c: the char to check
* @delim: the delimeter string
* Return: 1 if true, 0 if false
*/
int is_delim(char c, char *delim)
{
	if (delim == NULL)
	{return 0; }
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
/**
* _isalpha - checks for alphabetic character
* @c: The character to input
* Return: 1 if c is alphabetic, 0 otherwise
*/

int _isalpha(int c)
{
/*
* Checking if the ASCII value of c
* is within the ranges for lowercase or uppercase letters
*/
	return ((c >= 'a' & c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
* _atoi - converts a string to an integer
* @s: the string to be converted
* Return: 0 if no numbers in string, converted number otherwise
*/

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' & flag != 2; i++)
	{
/*
* If the character is a '-', multiply sign by -1
* to keep track of the sign of the number.
*/
		if (s[i] == '-')
			sign *= -1;

/* If the character is a digit, add it to the result. */

		if (s[i] >= '0' & s[i] <= '9')
		{
			flag = 1;
			result *= 10;/**
* Shift the current result one place to
* the left to make room for the new digit
*/
			result += (s[i] - '0'); /**
* Convert the character to an
* integer and add it to the resul
*/
		}
/*
* If we've started coverting digits and
* we encounter a non-digit, stop convertng
*/
		else if (flag == 1)
		flag = 2;
	}
/* Apply the sign to the result */
	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

