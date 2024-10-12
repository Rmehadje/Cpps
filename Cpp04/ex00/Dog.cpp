/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:39:30 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/03 14:11:28 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "dog default constructor has been called" << std::endl;
	this->setType("dog");
}

Dog::Dog(std::string name): Animal(name){
	std::cout << name << " has made an appearance" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy){
	*this = copy;
	std::cout << "copy constructor has been called" << std::endl;
}

Dog	&Dog::operator=(const Dog &og){
	this->type = og.type;
	std::cout << "[Dog] copy constructor assignment has been called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "[Dog] deconstructor has been called" << std::endl;
}

void	Dog::makeSound()const { 
	std::cout << "woof woof bark" << std::endl;
}
