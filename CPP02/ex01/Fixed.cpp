#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}
//overload int
Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = integer << this->fractionnal_bits;
}
//overload a float
Fixed::Fixed(const float floater)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = (int)(roundf(floater * (1 << this->fractionnal_bits)));
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.getRawBits();
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &op)
        return (*this);
    this->value = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->fractionnal_bits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->value >> this->fractionnal_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}

void Fixed::setRawBits(int const raw) { this->value = raw; }