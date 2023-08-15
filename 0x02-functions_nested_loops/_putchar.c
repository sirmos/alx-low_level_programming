#include "main_h"
#include <unistd_h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
