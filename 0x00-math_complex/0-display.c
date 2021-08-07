#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - Write a function that displays the complex numbers
 * @c: variable
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
	{
		printf("%G\n", c.re);
	}
	else if (c.im < 0)
	{
		printf("%g - %gi\n", c.re, -c.im);
	}
	else
	{
		printf("%G + %Gi\n", c.re, c.im);
	}
}
