/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:26:20 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/27 15:50:19 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fpn
{
	private:
		int	Fpnv;
		static const int	frac_bits = 8;
	public:
		Fpn();
		Fpn(const	int	inInt);
		Fpn(const	float	inFloat);
		Fpn(const	Fpn	&other);
		Fpn	&operator=(const	Fpn &og);
		~Fpn();
		int	getRawBits(void) const;
		void	setRawBits(int	const	raw);

		float	toFloat(void) const;
		int	toInt(void) const;

		bool	operator>(const Fpn &other) const;
		bool	operator<(const Fpn &other) const;
		bool	operator>=(const Fpn &other) const;
		bool	operator<=(const Fpn &other) const;
		bool	operator==(const Fpn &other) const;
		bool	operator!=(const Fpn &other) const;


		float	operator+(const	Fpn	&other) const;	
		float	operator-(const	Fpn	&other) const;	
		float	operator/(const	Fpn	&other) const;	
		float	operator*(const	Fpn	&other) const;	

		Fpn	&operator++( void );
		Fpn	operator++( int );
		Fpn	&operator--( void );
		Fpn	operator--( int );
};

std::ostream &operator<<(std::ostream &out, const Fpn &value);


#endif