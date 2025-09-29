/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:40 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/29 18:09:38 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);
void	is_inside(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point	a(0, 5);
	Point	b(10, 5);
	Point	c(5, 10);
	
	is_inside(a, b, c, Point(5, 7));
	is_inside(a, b, c, Point(5, 2));
	is_inside(a, b, c, Point(5, 5));
	is_inside(a, b, c, Point(10, 5));
	is_inside(a, b, c, Point(5, 5.1f));
	is_inside(a, b, c, Point(5, 10.1f));
	return (0);
}

void	is_inside(Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		std::cout << "\033[34m" << "on vertex" << "\033[0m" << std::endl;
	else if (bsp(a, b, c, point))
		std::cout << "\033[32m" << "is inside" << "\033[0m" << std::endl;
	else
		std::cout << "\033[31m" << "is outside" << "\033[0m" << std::endl;
}