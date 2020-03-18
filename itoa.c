#include "holberton.h"

/**
 * swap - swap char.
 * @a: char 1.
 * @b: char 2.
 *
 * Return: void.
 */

void swap(char *a, char *b)
{
	char aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/**
 * reverse - reverse string.
 * @str: string.
 * @length: length.
 *
 * Return: void.
 */

void reverse(char str[], int length)
{
	int start, end;

	end = length - 1;
	start = 0;
	while (start < end)
	{
		swap(str + start, str + end);
		start++;
		end--;
	}
}

/**
 * itoa - integer to ascii.
 * @num: num.
 * @str: string.
 * @base: base.
 *
 * Return: char.
 */

char *itoa(int num, char *str, int base)
{
	int i, rem;
	int isNegative;

	i = rem = isNegative = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}

	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}

	if (isNegative)
		str[i++] = '-';

	str[i] = '\0';

	reverse(str, i);

	return (str);
}

