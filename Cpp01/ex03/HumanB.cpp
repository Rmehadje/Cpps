/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:10:39 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:04 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->random = NULL;
}

HumanB::~HumanB(){
}

void	HumanB::setWeapon(Weapon& random){
	this->random = &random;
}

void	HumanB::Attack(void) const{
	if (this->random)
		std::cout << this->name << " Attacks with " << this->random->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon, therefore cannot attack." << std::endl;
}
