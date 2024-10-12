/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:26:20 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/28 11:43:59 by rmehadje         ###   ########.fr       */
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

};

std::ostream &operator<<(std::ostream &out, const Fpn &value);



#endif