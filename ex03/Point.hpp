/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:36:50 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/30 15:28:34 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef POINT_HPP
# define POINT_HPP

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &src);
		Point &operator=(const Point &src);
		~Point();
		bool	operator==(const Point &other) const;
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		static	Fixed get_addtition(Point &a, Point &b);
	private:
		Fixed	_x;
		Fixed	_y;
};

#endif