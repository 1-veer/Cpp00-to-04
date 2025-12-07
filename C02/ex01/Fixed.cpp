#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    value = num << frac_bits;
}

Fixed::Fixed(const float fnum)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(fnum * (1 << frac_bits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl; 
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;  

    if (this != &other) 
        value = other.value;
        
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl; 
}
      
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl; 
    return value;
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl; 
    value = raw;
}

int Fixed::toInt( void ) const
{
    return value >> frac_bits;
}

float Fixed::toFloat( void ) const
{
    return (float)value / (1 << frac_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& point) 
{
    out << point.toFloat() ;
    return out;  
}
