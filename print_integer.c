#include "holberton.h"

int print_integer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = malloc(sizeof(char *));
	if (p_buff == NULL)
		return (0);

	itoa(va_arg(list, int), p_buff, 10);

	size = print(p_buff);

	free(p_buff);

	return (size);
}
