/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:39:30 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 13:42:32 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "[dog] default constructor has been called" << std::endl;
	this->setType("dog");
	this->brain = new Brain();
}

Dog::Dog(std::string name): Animal(name){
	std::cout << name << " has barked through his appearance" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy){
	*this = copy;
	std::cout << "[dog] copy constructor has been called" << std::endl;
}

Dog	&Dog::operator=(const Dog &og){
	std::cout << "[Dog] copy constructor assignment has been called" << std::endl;
	if (this != &og){
		this->type = og.type;
		this->brain = new Brain(*og.brain);
	}
	return *this;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "[Dog] deconstructor has been called" << std::endl;
}

void	Dog::makeSound()const { 
	std::cout << "woof woof bark" << std::endl;
}

Brain	*Dog::getBrain(){
	return (this->brain);
}