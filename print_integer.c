#include "holberton.h"

int print_integer(va_list list)
{
	char buff[1024];
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), buff, 10);

	size = print(p_buff);

	return (size);
}
