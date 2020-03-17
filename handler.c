#include "holberton.h"

/**
 * handler - Format controller
 * @str: String format
 * @list: List of arguments
 *
 * Return: Total size of arguments with the total size of the base string
 **/
int handler(const char *str, va_list list)
{
	int size, i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			size = percent_handler(str, list, &i);
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}

/**
 * percent_handler - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @i: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handler(const char *str, va_list list, int *i)
{
	int size, j, number_formats;
	format formats[] = {
		{'d', print_int},
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'%', print_char}
	};


	size = j = 0;
	*i = *i + 1;

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}


	size = print_char(list);

	return (size);
}
