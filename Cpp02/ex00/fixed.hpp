/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:26:20 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/24 12:37:39 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fpn
{
	private:
		int	Fpnv;
		static const int	frac_bits = 8;
	public:
		Fpn();
		Fpn(const	Fpn	&other);
		Fpn	&operator=(const	Fpn &og);
		~Fpn();
		int	getRawBits(void) const;
		void	setRawBits(int	const	raw);
};













#endif