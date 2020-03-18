#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: String encode
 */
char *rot13(char *s)
{
	int i, j;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}

/**
 * print_rot - Prints the rot13'ed string
 * @list: String to encoded
 *
 * Return: Length of the string encoded
 **/
int print_rot(va_list list)
{
	char *p, *p_buffer;
	int p_len;

	p = va_arg(list, char *);
	p_buffer = rot13(p);

	p_len = print(p_buffer);

	return (p_len);
}
