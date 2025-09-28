/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:45 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/28 16:24:10 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits(8);

Fixed::Fixed() : _raw(0)
{
	std::cout << "Fixed default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &copy) : _raw(copy._raw)
{
	std::cout << "Fixed copy constructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &src)  
{
	if (this != &src)
	{
		this->_raw = src._raw;
	}
	std::cout << "Fixed assignement operator called" << std::endl;
	return (*this);
}

bool	Fixed::operator<(const Fixed &other) const
{
	if (this->_raw < other._raw)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &other) const
{
	if (this->_raw > other._raw)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	if (this->_raw <= other._raw)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	if (this->_raw >= other._raw)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &other) const
{
	if (this->_raw == other._raw)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	if (this->_raw == other._raw)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	this->_raw += other._raw;
	return (*this);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	this->_raw -= other._raw;
	return (*this);
}

Fixed	Fixed::operator*(const Fixed &other) // right ??
{

	this->_raw *= (other.toInt());
	return (*this);
}

Fixed	Fixed::operator/(const Fixed &other) //right ??
{
	this->_raw /= other.toInt();
	return (*this);
}

Fixed	&Fixed::operator++()
{
	this->_raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	++*this;
	return (old);
}

Fixed	&Fixed::operator--()
{
	this->_raw--;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	--*this;
	return (old);
}

Fixed::Fixed(const int nb) : _raw(nb * (1 << this->_fractBits))
{
	std::cout << "Fixed int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float nb) : _raw(roundf(nb * (1 << this->_fractBits)))
{
	std::cout << "Fixed float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = _raw;
}

int	Fixed::toInt(void) const
{
	return (this->_raw / (1 << this->_fractBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_raw / (1 << this->_fractBits));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a._raw < b._raw)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._raw < b._raw)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a._raw > b._raw)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._raw > b._raw)
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &src)
{
	os << src.toFloat();
	return (os);
}