/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:11:22 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/13 10:31:16 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->setPrivateHp(100);
	this->setPrivateAd(30);
	this->setPrivateEp(100);
	std::cout << "Frag" << name << " has appeared" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy){
	this->setPrivateHp(100);
	this->setPrivateAd(30);
	this->setPrivateEp(100);
	std::cout << name << "copy constructor has been called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &og){
	if (this != &og)
	{
		FragTrap::operator=(og);
		this->setPrivateHp(100);
		this->setPrivateAd(30);
		this->setPrivateEp(100);
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap deconstructor has been called" << std::endl;
}

void	FragTrap::Attack(const	std::string &target){
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

void	FragTrap::highFiveGuys(void){
	int	Hp = getPrivateHp();
	int	Ep = getPrivateEp();

	if (Hp == 0){
		std::cout << getPrivateName() << " has initiated a high five, but he can't cause he is 6 feet under..." << std::endl;
		return ;
	}
	if (Ep == 0){
		std::cout << getPrivateName() << " has initiated a high five, but his hand was too heavy for him to pick it up " << getPrivateName() << " is exhausted..." << std::endl;
		return ;
	}
	std::cout << getPrivateName() << " has initiated a high five with the group!" << std::endl;
	std::cout << getPrivateName() << ": Bring it in guys, high fives!" << std::endl;
	Ep -= 1;
	setPrivateEp(Ep);	
}

void	FragTrap::AcceptHighFive(const std::string &target, int flag){
	int Hp = getPrivateHp();
	if (Hp == 0){
		std::cout << getPrivateName() << " cannot accept the high five request since he is 6 feet under..." << std::endl;
	}
	if (flag == 0){
		std::cout << getPrivateName() << ": shove it no high five for you!" << std::endl;
		return ;
	}
	if (flag == 1){
		std::cout << getPrivateName() << ": you got it !" <<std::endl;
		std::cout << "(" << getPrivateName() << " + " << target << "): *intergalactic Dap*" << std::endl;
		return ;
	}
}
