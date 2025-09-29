/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:40 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/28 18:26:01 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	{
		std::cout << std::endl;
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;	
	}
	{
		std::cout << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;		
	}
	{
		std::cout << std::endl;
		Fixed const e(Fixed(100.05f) + Fixed(2));

		std::cout << "e is " << e << std::endl;
		std::cout << std::endl;
		if (a < b)
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
	}
	{
		std::cout << std::endl;
		Fixed a;
		Fixed b(5.05f);
		Fixed c(2);

		std::cout << "b is " << b << std::endl;
		Fixed d(b * c);
		std::cout << "b is " << b << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << d << std::endl;
		std::cout << Fixed::max(a, d) << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
