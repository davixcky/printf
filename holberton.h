#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *);
int _putchar(char);
int print(char *);
char *itoa(int, char *, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
<< << << < HEAD
int print_n(char *str, int n);
char *itoa(int, char *, int);
int print(char *);

== == == =
int print_integer(va_list);
>> >> >> > 24120261667721075ac4c2e3078afa077c8c4573
/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
