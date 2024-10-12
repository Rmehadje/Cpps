/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:20:15 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/03 14:25:28 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "[WrongCat] default constructor has been called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(std::string name): WrongAnimal(name){
	std::cout << name << " has made an appearance" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy){
	*this = copy;
	std::cout << "[WrongCat] copy constructor has been called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &og){
	this->type = og.type;
	std::cout << "[WrongCat] copy constructor assignment has been called" << std::endl;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "[WrongCat] deconstructor has been called" << std::endl;
}

void	WrongCat::makeSound()const{
	std::cout << "meow" << std::endl;
}
