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
	int p_len;

	p = va_arg(list, char*);
	p_len = print((p != NULL) ? p : "(null)");

	return (p_len);
}

