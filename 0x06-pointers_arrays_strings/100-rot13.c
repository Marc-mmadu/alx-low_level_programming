#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 * Return: the pointer to encoded string
 */

char *rot13(char *str)
{
	int count = 0, i;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + count) == alphabet[i])
			{
				*(str + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
