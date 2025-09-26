/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:45 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/26 11:51:05 by hdougoud         ###   ########.fr       */
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

Fixed	&Fixed::operator=(const Fixed &src)
{
	if (this != &src)
	{
		this->_raw = src._raw;
	}
	std::cout << "Fixed assignement operator called" << std::endl;
	return (*this);
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

std::ostream	&operator<<(std::ostream &os, const Fixed &src)
{
	os << src.toFloat();
	return (os);
}