/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongwrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:26:18 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/03 14:26:41 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	std::cout << "[WrongAnimal] default constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): type(name){
	std::cout << name << " has made an appearance" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	*this = copy;
	std::cout << "[WrongAnimal] copy constructor has been called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &og){
	this->type = og.type;
	std::cout << "[WrongAnimal] copy constructor assignment has been called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "[WrongAnimal] deconstructor has been called" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return	this->type;
}

void	WrongAnimal::setType(std::string Type){
	this->type = Type;
}

void	WrongAnimal::makeSound()const {
	std::cout << "*Wrong animal sounds intensifying*" << std::endl;
}
