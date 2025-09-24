/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:06:43 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/24 17:08:08 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXEX_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int					_fixedPoint;
		static const int	_fractBits;
};

#endif