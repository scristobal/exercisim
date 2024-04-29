#include "complex_numbers.h"

#include <math.h>

complex_t c_add(complex_t a, complex_t b) {
    complex_t r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

complex_t c_sub(complex_t a, complex_t b) {
    complex_t r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

complex_t c_mul(complex_t a, complex_t b) {
    complex_t r;
    r.real = a.real * b.real - a.imag * b.imag;
    r.imag = a.real * b.imag + b.real * a.imag;
    return r;
}

complex_t c_div(complex_t a, complex_t b) {
    complex_t r;

    double m = b.real * b.real + b.imag * b.imag;

    r.real = (a.real * b.real + a.imag * b.imag) / m;
    r.imag = (a.imag * b.real - a.real * b.imag) / m;

    return r;
}

double c_abs(complex_t x) {
    complex_t r;

    r.real = x.real * x.real;
    r.imag = x.imag * x.imag;

    return sqrt(r.real + r.imag);
}

complex_t c_conjugate(complex_t x) {
    complex_t r;

    r.real = x.real;
    r.imag = -x.imag;

    return r;
}

double c_real(complex_t x) {
    return x.real;
}

double c_imag(complex_t x) {
    return x.imag;
}

complex_t c_exp(complex_t x) {
    complex_t r;

    r.real = exp(x.real) * cos(x.imag);
    r.imag = exp(x.real) * sin(x.imag);

    return r;
}
