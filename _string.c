#include "main.h"
int _string(char *string)
{
int count;

	for (int i = 0; string[i] != '\0'; i++)
{
	count += _putchar(string[i]);
}

	return (count);
}
