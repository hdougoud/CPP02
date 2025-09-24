/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:45 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/24 17:21:20 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBits(8);

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Fixed default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &copy) : _fixedPoint(copy._fixedPoint)
{
	std::cout << "Fixed copy constructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	if (this != &src)
	{
		this->_fixedPoint = src._fixedPoint;
	}
	std::cout << "Fixed assignement operator called" << std::endl;
	return (*this);
}

Fixed::Fixed(const int fractional) : _fixedPoint(fractional)
{
	std::cout << "Fixed int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float fractional) : _fixedPoint(fractional)
{
	std::cout << "Fixed float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}