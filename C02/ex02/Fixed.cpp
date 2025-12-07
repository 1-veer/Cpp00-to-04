#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    // std::cout << "Int constructor called" << std::endl;
    value = num << frac_bits;
}

Fixed::Fixed(const float fnum)
{
    // std::cout << "Float constructor called" << std::endl;
    value = roundf(fnum * (1 << frac_bits));
}

Fixed::Fixed(const Fixed& other)
{
    // std::cout << "Copy constructor called" << std::endl; 
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;  

    if (this != &other) 
        value = other.value;
        
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl; 
}
      
int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl; 
    return value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl; 
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

std::ostream& operator<<(std::ostream& out, const Fixed& point) // because std::ostream specifically disallows being copied.
{
    out << point.toFloat() ;
    return out;  // to be chainbale (we return out "std::cout" so 'incase' we print whatever comes next)
}

bool Fixed::operator>(const Fixed& other) const
{
    return (value > other.value);
}

bool Fixed::operator<(const Fixed& other) const
{
    return (value < other.value);
}

bool Fixed::operator>=(const Fixed& other) const 
{
    return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const 
{
    return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const 
{
    return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const 
{
    return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed res;
    res.setRawBits(value + other.value);
    return (res);
}

Fixed Fixed::operator-(const Fixed& other) const 
{
    Fixed result;
    result.setRawBits(this->value - other.value);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    result.setRawBits((value * other.value) >> frac_bits); // the scaling gets squared otherwise , and then  we shift right to divide 10 -> 1
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    result.setRawBits((value / other.value) << frac_bits); // vice versa
    return result;
}

Fixed& Fixed::operator++()
{
    ++value;
    return *this;
}       

Fixed Fixed::operator++(int)
{
    Fixed old_value_obj (*this);
    ++value;
    return old_value_obj;
}   

Fixed& Fixed::operator--()
{
    --value;
    return *this;
}       

Fixed Fixed::operator--(int) 
{
    Fixed old_value_obj (*this);
    --value;
    return old_value_obj;
}   

       
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a < b)
        return a;
    else 
        return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
     if(a < b)
        return a;
    else 
        return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a > b)
        return a;
    else 
        return b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a > b)
        return a;
    else 
        return b;
}