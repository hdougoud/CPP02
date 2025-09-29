/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:36:50 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/29 17:28:26 by hdougoud         ###   ########.fr       */
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
		float	getValueX(void) const;
		float	getValueY(void) const;
	private:
		Fixed	_x;
		Fixed	_y;
};

#endif