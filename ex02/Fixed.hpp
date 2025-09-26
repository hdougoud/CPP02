/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:43 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/26 16:27:16 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed &operator=(const Fixed &src);
		bool &operator<(const Fixed &other);
		bool &operator>(const Fixed &left);
		bool &operator>=(const Fixed &left);
		bool &operator<=(const Fixed &left);
		bool &operator==(const Fixed &left);
		bool &operator!=(const Fixed &left);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt( void ) const;
	private:
		int					_raw;
		static const int	_fractBits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &src);

#endif