#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be captitalized.
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
	index++;
	if (str[index - 1] == ' ' ||
	str[index - ] == '\t' ||
	str[index - ] == '\n' ||
	str[index - ] == ',' ||
	str[index - ] == ';' ||
	str[index - ] == '.' ||
	str[index - ] == '!' ||
	str[index - ] == '?' ||
	str[index - ] == '"' ||
	str[index - ] == '(' ||
	str[index - ] == ')' ||
	str[index - ] == '<' ||
	str[index - ] == '>' ||
	index == 0)
	str[index] -= 32;
	index++;
	}
}
