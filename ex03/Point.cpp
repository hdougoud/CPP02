/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:36:52 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/29 17:28:18 by hdougoud         ###   ########.fr       */
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

float	Point::getValueX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getValueY(void) const
{
	return (this->_y.toFloat());
}