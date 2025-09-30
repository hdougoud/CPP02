/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:05:48 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/30 15:25:17 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	area_calculation(const Point &a, const Point &b, const Point &c);

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area;
	Fixed	area1;
	Fixed	area2;
	Fixed	area3;

	area = area_calculation(a, b, c);
	area1 = area_calculation(point, b, c);
	area2 = area_calculation(a, point, c);
	area3 = area_calculation(a, b, point);
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false);
	if (area == area1 + area2 + area3)
		return (true);
	return (false);
}

static Fixed	area_calculation(const Point &a, const Point &b, const Point &c)
{
	Fixed	term1;
	Fixed	term2;
	Fixed	term3;
	Fixed	area;

	term1 = (a.getX() * (b.getY() - c.getY()));
	term2 = (b.getX() * (c.getY() - a.getY()));
	term3 = (c.getX() * (a.getY() - b.getY()));
	area = (term1 + term2 + term3);
	if (area < Fixed(0))
		return (area * Fixed(-1));
	return (area);
}