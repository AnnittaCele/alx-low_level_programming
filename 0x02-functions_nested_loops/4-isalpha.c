#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: The characterto be checked
 * Return: 1 for alphabetic character or  0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
