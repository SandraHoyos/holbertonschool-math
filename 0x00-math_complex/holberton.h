#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/**
 *struct complex_struct - Build the structure “complex”
 *where a complex number a + ib is represented by two doubles.
 *@re: real part
 *@im: imaginary part
 */
typedef struct complex_struct
{
	double re, im;
} complex;

void display_complex_number(complex c);

#endif /* _HOLBERTON_H_ */
