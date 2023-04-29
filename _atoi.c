#include "shell.h"

/**
 * interactive - returns true if the shell is in interactive mode
 *  @info: struct address
 * Return: 1 if the mode is interactive, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - determines whether a character is a delimeter
 * @c: the character to be checked
 * @delim: the string delimeter
 * Return: If true 1, otherwise, return 0.
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - searches for alphabetic characters
 * @c: The input character
 * Return: 1 If c is alphabetical, otherwise, return 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * *_atoi - This function transforms a string to an integer.
 * @s: the string to be transformed
 * Return: 0 If there are no numbers in the string,
 * otherwise, return the converted number.
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
