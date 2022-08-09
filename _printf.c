#include <stddef.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int count = 0, i;
va_list data;
va_start(data, format);

for (i = 0; format[i] != '%' && format[i] != '\0'; i++)
{

if (format[i] != '%')
{
count += _putchar(format[i]);
i++;
}
else if (format[i] == '%' && format[i + 1] != ' ')
{
switch (format[i + 1])
{
case 'c':
count += _putchar(va_arg(data, int));
break;


case 's':
count += _string(va_arg(data, char *));
break;

case '%':
count += _putchar('%');
break;

case 'd':
count += print_decimal(va_arg(data, int));
break;

case 'i':
count += print_decimal(va_arg(data, int));
default:
break;
}
}
i += 2; }
return (count); }
