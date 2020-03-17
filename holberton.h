#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *);
int _putchar(char);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_int(va_list);
int print_string(va_list);
int print_char(va_list);


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
