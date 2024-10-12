/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:50:04 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 12:32:51 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "~brain~ constructor has been called" << std::endl;
}

Brain::Brain(std::string name){
	std::cout << name << "'s brain is now here !" << std::endl;
}

Brain::Brain(const Brain &copy){
	*this = copy;
	std::cout << "~Brain~ copy constructor has been called" << std::endl;
}

Brain	&Brain::operator=(const Brain &og){
	int	i = 0;
	std::cout << "~Brain~ copy assignement constructor has been called!" << std::endl;
	if (this != &og){
		while (i < 100)
		{
			this->ideas[i] = og.ideas[i];
			i++;
		}
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "~Brain~ deconstructor has been called" << std::endl;
}
