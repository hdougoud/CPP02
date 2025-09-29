/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:40 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/29 18:50:33 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	print_bool(bool status);

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	{
		std::cout << "\n__To float__" << std::endl;
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;	
	}
	{
		std::cout << "\n__To int__" << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;		
	}
	{
		std::cout << "\n__Comparison operators__" << std::endl;
		print_bool(a < b);
		print_bool(a > b);
		print_bool(a == b);
		print_bool(a != b);
		print_bool(d >= b);
		print_bool(b <= c);
	}
	{
		std::cout << "\n__Arithmetic operators__" << std::endl;
		std::cout << a + b << std::endl;
		std::cout << b - d << std::endl;
		std::cout << b * c << std::endl;
		std::cout << a / b << std::endl;
	}
	{
		Fixed		e(10);
		Fixed		f(10.5f);
		const Fixed	g(5);
		const Fixed	h(7.5f);
	
		std::cout << "\n__Overload function__" << std::endl;
		std::cout << Fixed::max(e, f) << std::endl;
		std::cout << Fixed::max(g, h) << std::endl;
		std::cout << Fixed::min(e, f) << std::endl;
		std::cout << Fixed::min(g, h) << std::endl;
	}
	{
		std::cout << "\n__Subjet exemple__" << std::endl;
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
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
		std::cout << d << std::endl;
		std::cout << Fixed::max(a, d) << std::endl;
	}
	return (0);
}

void	print_bool(bool status)
{
	if (status)
		std::cout << "\033[32m" << "True" << "\033[0m" << std::endl;
	else
		std::cout << "\033[31m" << "False" << "\033[0m" << std::endl;
}
