/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:41 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/30 13:58:16 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->setPrivateHp(100);
	this->setPrivateAd(20);
	this->setPrivateEp(50);
	std::cout << "Scav" << name << " has appeared" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy){
	this->setPrivateHp(100);
	this->setPrivateAd(20);
	this->setPrivateEp(50);
	std::cout << "ScavTrap copy constructor has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &og){
	if (this != &og)
	{
		ClapTrap::operator=(og);
		this->setPrivateHp(100);
		this->setPrivateAd(20);
		this->setPrivateEp(50);		
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Deconstructor has been called" << std::endl;
}

void	ScavTrap::Attack(const	std::string &target){
	int	Hp = getPrivateHp();
	int	Ad = getPrivateAd();
	int	Ep = getPrivateEp();
	std::string name = getPrivateName();

	if (Hp == 0)
	{
		std::cout << target << " is already dead and thus can no longer attack" << std::endl;
		return ;
	}
	if (Ep == 0)
	{
		std::cout << target << " is depleated and thus can no longer use his abilities" << std::endl;
		return ;
	}
	if (Hp > 0 && Ep > 0)
	{
		std::cout << name << " has attacked " << target << std::endl;
		Ep -= 1;
		setPrivateEp(Ep);
	}
}

void	ScavTrap::guardGate(){
	int Hp = getPrivateHp();
	int Ep = getPrivateEp();
	if (Hp == 0){
		std::cout << getPrivateName() << " has perished, he can't use abilities" << std::endl;
		return ;
	}
	if (Ep == 0){
		std::cout << getPrivateName() << " has perished, he can't use abilities" << std::endl;
		return ;
	}	
	std::cout << getPrivateName() << " has used GUARD GATE..." << std::endl;
	Ep -= 1;
	setPrivateEp(Ep);
}
