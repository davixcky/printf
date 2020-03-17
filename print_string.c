#include "holberton.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list valist)
{
	char *p;
	int p_len = 0;

	p = va_arg(list, char*);

	if (p == NULL)
		p_len = print("(null");

	p_len = print(p);

	return (p_len);
}

