/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:39:44 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 13:23:11 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "[Cat] default constructor has been called" << std::endl;
	this->setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(std::string name): Animal(name){
	std::cout << name << " has purred through his appearance" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy){
	*this = copy;
	std::cout << "[Cat] copy constructor has been called" << std::endl;
}

Cat	&Cat::operator=(const Cat &og){
	std::cout << "[Cat] copy constructor assignment has been called" << std::endl;
	if (this != &og){
		this->type = og.type;
		this->brain = new Brain(*og.brain);
	}
	return *this;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "[Cat] deconstructor has been called" << std::endl;
	
}

void	Cat::makeSound()const{
	std::cout << "meow" << std::endl;
}

Brain	*Cat::getBrain(){
	return (this->brain);
}