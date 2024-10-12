/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:39:44 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/03 13:45:45 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "[Cat] default constructor has been called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(std::string name): Animal(name){
	std::cout << name << " has made an appearance" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy){
	*this = copy;
	std::cout << "[Cat] copy constructor has been called" << std::endl;
}

Cat	&Cat::operator=(const Cat &og){
	this->type = og.type;
	std::cout << "[Cat] copy constructor assignment has been called" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "[Cat] deconstructor has been called" << std::endl;
}

void	Cat::makeSound()const{
	std::cout << "meow" << std::endl;
}
