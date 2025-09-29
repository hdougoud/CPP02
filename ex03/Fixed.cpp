/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:45 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/29 18:53:25 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits(8);

Fixed::Fixed() : _raw(0)
{
	return ;
}

Fixed::Fixed(const Fixed &copy) : _raw(copy._raw)
{
	return ;
}

Fixed	&Fixed::operator=(const Fixed &src)  
{
	if (this != &src)
	{
		this->_raw = src._raw;
	}
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
	Fixed	result;
	result._raw = (this->_raw + other._raw);
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	result;
	result._raw = (this->_raw - other._raw);
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	result;
	result._raw = (this->_raw * other._raw) / (1 << this->_fractBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed	result;
	result._raw = (this->_raw * (1 << this->_fractBits));
	result._raw /= other._raw;
	return (result);
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
	return ;
}

Fixed::Fixed(const float nb) : _raw(roundf(nb * (1 << this->_fractBits)))
{
	return ;
}

Fixed::~Fixed()
{
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
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