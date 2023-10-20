#include "shell.h"

/**
 * Scat - custom cat for path
 * @str1: first string
 * @str2: second string
 * Return: return conactenation
 */

char *Scat(char *str1, char *str2)
{
	int len1 = _strlen(str1), len2 = _strlen(str2);
	char *result = malloc(len1 + len2 + 2);

	result = _strcat(str1, "/");
	result = _strcat(result, str2);
	result = _strcat(result, "\0");

	return (result);
}


/**
 * _strcat - concatenate 2 string
 * @str1: first string
 * @str2: second string
 * Return: return conactenation
 */

char *_strcat(char *str1, char *str2)
{
	int len1 = _strlen(str1), len2 = _strlen(str2), i;
	char *result;

	result = malloc(len1 + len2);

	if (result == NULL)
	{
		perror("Memory allocation failed");
		exit(0);
	}

	for (i = 0; i < len1; i++)
		result[i] = str1[i];
	for (i = 0; i < len2; i++)
		result[len1 + i] = str2[i];
	result[len1 + len2] = '\0';
	return (result);
}

/**
 * _strlen - function to count string length
 * @str: string to be counted
 * Return: return number of char
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
