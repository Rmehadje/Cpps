/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:29:09 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/28 11:58:59 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fpn::Fpn(){
	std::cout << "default constructor called..." <<std::endl;
	this->Fpnv = 0;
}

Fpn::Fpn(const	Fpn	&other) {
	std::cout << "copy constructor called..." << std::endl;
	this->Fpnv = other.getRawBits();

}

Fpn::Fpn(const	int	toInt){
	std::cout << "int constructor called..." <<std::endl;
	this->setRawBits(toInt << this->frac_bits);
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

Fpn::Fpn(const	float	toFloat){
	std::cout << "float constructor called..." <<std::endl;
	this->setRawBits((int)roundf(toFloat * (float)(1 << this->frac_bits)));
}


void	Fpn::setRawBits(int const raw){
	std::cout << "setRawBits member function called..." << std::endl;
	this->Fpnv = raw;
}

float	Fpn::toFloat(void) const{
	return ((float)this->Fpnv / (float)(1 << Fpn::frac_bits));
}

int Fpn::toInt(void) const{
	return this->Fpnv >> Fpn::frac_bits;
}

std::ostream &operator<<(std::ostream &out, const Fpn &value){
	out << value.toFloat();
	return (out);
}

bool	Fpn::operator>(const	Fpn &other) const{
	return this->getRawBits() > other.getRawBits();
}

bool	Fpn::operator<(const Fpn &other) const{
	return this->getRawBits() < other.getRawBits();
}

bool	Fpn::operator>=(const Fpn &other) const{
	return this->getRawBits() >= other.getRawBits();
}

bool	Fpn::operator<=(const Fpn &other) const{
	return this->getRawBits() <= other.getRawBits();
}

bool	Fpn::operator==(const Fpn &other) const{
	return this->getRawBits() == other.getRawBits();
}

bool	Fpn::operator!=(const Fpn &other) const{
	return this->getRawBits() != other.getRawBits();
}

float	Fpn::operator+(const	Fpn &other) const{
	return (this->toFloat() + other.toFloat());
}

float	Fpn::operator-(const	Fpn &other) const{
	return (this->toFloat() - other.toFloat());
}

float	Fpn::operator/(const	Fpn &other) const{
	return (this->toFloat() / other.toFloat());
}

float	Fpn::operator*(const	Fpn &other) const{
	return (this->toFloat() * other.toFloat());
}

Fpn	&Fpn::operator++( void ){
	this->Fpnv += 1;
	return *this;
}

Fpn	Fpn::operator++( int ){
	Fpn	tmp(*this);
	++(*this);
	return *this;
}

Fpn	&Fpn::operator--(void){
	this->Fpnv -= 1;
	return *this;
}

Fpn	Fpn::operator--( int ){
	Fpn	tmp(*this);
	--(*this);
	return *this;
}

Fpn	&Fpn::min(Fpn &a, Fpn &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
const	Fpn	&Fpn::min(Fpn const &a, Fpn const &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
Fpn	&Fpn::max(Fpn &a, Fpn &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
const	Fpn	&Fpn::max(Fpn const &a, Fpn const &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
