#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>

class Complex_Numbers
{
private:
    int *dm_real;
    int *dm_imaginary;

public:
    Complex_Numbers(int real_part, int imaginary_part);

    void operator<<(const Complex_Numbers &object);

    ~Complex_Numbers();
};

#endif