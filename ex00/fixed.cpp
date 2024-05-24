/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:29:09 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/24 13:47:59 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fpn::Fpn(){
	std::cout << "default constructor called..." <<std::endl;
	this->Fpnv = 0;
}

Fpn::Fpn(const	Fpn	&other) {
	std::cout << "copy constructor called..." << std::endl;
	this->Fpnv = other.getRawBits();

}

Fpn::~Fpn(){
	std::cout << "deconstructor called..." << std::endl;
}

Fpn &Fpn::operator=(const Fpn &og){
	std::cout << "Copy assignement operator called..." << std::endl;
	this->Fpnv = og.getRawBits();
	return *this;
}

int	Fpn::getRawBits() const
{
	std::cout << "getRawBits member function called..." << std::endl;
	return this->Fpnv;
}

void	Fpn::setRawBits(int const raw){
	std::cout << "setRawBits member function called..." << std::endl;
	this->Fpnv = raw;
}
