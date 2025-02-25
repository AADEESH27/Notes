#include "Complex.hpp"

Complex_Numbers::Complex_Numbers(int real_part, int imaginary_part)
{
    std::cout << "Parameterized Constructor Called" << std::endl;
    this->dm_real = new int(real_part);
    this->dm_imaginary = new int(imaginary_part);
}

void Complex_Numbers::operator<<(const Complex_Numbers &object)
{
    std::cout << object.dm_real << " + " << object.dm_imaginary << "i" << std::endl;
}

Complex_Numbers::~Complex_Numbers()
{
    std::cout << "Destructor Called" << std::endl;
    delete dm_real;
    delete dm_imaginary;
}