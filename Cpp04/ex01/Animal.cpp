/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:00:01 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 13:28:30 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal"){
	std::cout << "[Animal] default constructor has been called" << std::endl;
}

Animal::Animal(std::string name): type(name){
	std::cout << name << " has made an appearance" << std::endl;
}

Animal::Animal(const Animal &copy){
	*this = copy;
	std::cout << "[Animal] copy constructor has been called" << std::endl;
}

Animal	&Animal::operator=(const Animal &og){
	std::cout << "[Animal] copy constructor assignment has been called" << std::endl;
	if (this != &og){
		this->type = og.type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout << "[Animal] deconstructor has been called" << std::endl;
}

std::string	Animal::getType(void) const{
	return	this->type;
}

void	Animal::setType(std::string Type){
	this->type = Type;
}

void	Animal::makeSound()const {
	std::cout << getType() <<" *animal sounds intensifying*" << std::endl;
}
