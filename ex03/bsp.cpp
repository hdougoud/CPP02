/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cPP                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:05:48 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/29 17:33:12 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	area_calculation(const Point &a, const Point &b, const Point &c);

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	area;
	float	area1;
	float	area2;
	float	area3;

	area = area_calculation(a, b, c);
	area1 = area_calculation(point, b, c);
	area2 = area_calculation(a, point, c);
	area3 = area_calculation(a, b, point);
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false);
	if (area == area1 + area2 +area3)
		return (true);
	return (false);
}

static float	area_calculation(const Point &a, const Point &b, const Point &c)
{
	float	term1;
	float	term2;
	float	term3;

	term1 = (a.getValueX() *(b.getValueY() - c.getValueY()));
	term2 = (b.getValueX() * (c.getValueY() - a.getValueY()));
	term3 = (c.getValueX() * (a.getValueY() - b.getValueY()));
	return (std::fabs(term1 + term2 + term3));
}