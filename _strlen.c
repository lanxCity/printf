#include "main.h"

/**
 * _strlen - Determines the length of a string
 * @s: param
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;
	/**/
	for (i = 0; *(s + i) != '\0'; i++)
		continue;
	/**/
	return (i);
}

/**
 * _strlenc - Determines the length of a string
 * @s: param
 * Return: returns the length of a string
 */
int _strlenc(const char *s)
{
	int i;
	/**/
	for (i = 0; *(s + i) != '\0'; i++)
		continue;
	/**/
	return (i);
}
