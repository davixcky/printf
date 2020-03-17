#include "holberton.h"


void swap(char *a, char *b)
{
	char aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

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

char *itoa(int num, char* str, int base)
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

