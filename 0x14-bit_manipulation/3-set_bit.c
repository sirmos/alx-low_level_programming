#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: decimal number passed by pointer
 * @index: index position to change, effect from 0
 * Return: 1 if it worked, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int p;

			if (index > 64)
						return (-1);

				for (p = 1; index > 0; index--, p *= 2)
							;
					*n += p;

						return (1);
}
