/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:10:18 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:01 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& random): name(name), random(random)
{
}

HumanA::~HumanA()
{
}

void HumanA::Attack() const{
	std::cout << this->name << " Attacks with " << this->random.getType() << std::endl;
}