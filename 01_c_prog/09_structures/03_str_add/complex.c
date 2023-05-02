#include "complex.h"

struct complex add_complex(struct complex a, struct complex b) 
{
    struct complex result;

    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;

    return result;
}

