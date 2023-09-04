#include "main.h"

/**
 * _islower - is a char lower case?
 * @c: ascii value to be tested
 * Return: 1 if c is lower case
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
