#include "holberton.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *aux;
	int i;

	aux = va_arg(list, char*);

	for (i = 0; aux[i] != 0; i++)
		_putchar(aux[i]);

	return (i);
}

