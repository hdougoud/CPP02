/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:36:52 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/30 15:28:30 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return ;
}

Point::Point(const Point &src) : _x(src._x), _y(src._y)
{
	return ;
}

Point	&Point::operator=(const Point &src)
{
	if (this != &src)
	{
		this->_x = src._x;
		this->_y = src._y;
	}
	return (*this);
}

Point::~Point()
{
	return ;
}

bool	Point::operator==(const Point &other) const
{
	if (this->_x == other._x)
		if (this->_y == other._y)
			return (true);
	return (false);
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

Fixed	Point::get_addtition(Point &a, Point &b)
{
	return (a._x * a._y);
}