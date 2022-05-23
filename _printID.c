#include "main.h"

/**
 * printID - help prints character format
 * @format1: char after %
 * @args: arguement for the type of format
 * Return: count of char printed
 */
int printID(char format1, va_list args)
{
	int i;

	structID ids[] = {
		{"s", print_str},
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		("d", print_bin},
		{NULL, NULL}
	};

	for (i = 0; ids[i].ID != NULL; i++)
	{
		if (ids[i].ID[0] == format1)
			return (ids[i].outter(args));
	}
	return (0);
}
