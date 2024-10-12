/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:44:54 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/20 14:15:54 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type){
	this->setType(type);
}
Weapon::~Weapon (){

}
const std::string& Weapon::getType(){
	return (this->type);
}

void	Weapon::setType(std::string Type){
	this->type = Type;
}