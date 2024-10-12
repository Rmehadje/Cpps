/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:24:12 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/13 10:22:27 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "random";
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	std::cout << "default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string	name){
	this->name = name;
	this->Hit_points = 10;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	std::cout << name << " has appeared" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap	&copy){
	this->name = copy.name;
	this->Hit_points = copy.Hit_points;
	this->Attack_damage = copy.Attack_damage;
	this->Energy_points = copy.Energy_points;
	std::cout << name << " has been copied through the copy constructor" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const	ClapTrap &og){
	if (this != &og)
	{
		this->name = og.name;
		this->Hit_points = og.Hit_points;
		this->Attack_damage = og.Attack_damage;
		this->Energy_points = og.Energy_points;
	}
	std::cout << name << " has been copied using the copy assignment operator" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << name << " has been destroyed" << std::endl;
}

void	ClapTrap::Attack(const	std::string &target){
	if (this->Hit_points == 0){
		std::cout << name << " could not possibly attack, as he has been defeated already..." << std::endl;
		return ;
	}
	if (this->Energy_points == 0)
	{
		std::cout << this->name << " has tried to attack but couldn't gather up enough determination..." << std::endl;
		return ;
	}
	if (this->Hit_points >= 1 && this->Energy_points > 0){
		std::cout << this->name << " has attacked " << target << std::endl;
		this->Energy_points -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->Hit_points == 0)
	{
		std::cout << name << " has already been defeated, no use attacking him further..." << std::endl;
		return ;
	}
	std::cout << this->name << " has taken " << amount << " points of damage" << std::endl;
	if (amount >= this->Hit_points)
	{
		std::cout << name << " has dropped to the ground and has been defeated" << std::endl;
		this->Hit_points = 0;
		return ;
	}
	else
	{
		this->Hit_points -= amount;
		if (this->Hit_points <= 2)
			std::cout << name << " looks bloodied, cannot have much left in him!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->Hit_points == 0){
		std::cout << name << " has already been defeated, no use trying to heal him" << std::endl;
		return ;
	}
	if (this->Energy_points == 0){
		std::cout << name << " tried to heal himself but couldn't muster up enough determination..." << std::endl;
		return ;
	}
	if (this->Hit_points == 10){
		std::cout << name << " already is at his peak, no use trying to heal him" << std::endl;
		return ;
	}
	if (this->Energy_points > 0){
		this->Hit_points += amount;
		this->Energy_points -= 1;
	}
	amountRepaired(amount);
}

void	ClapTrap::amountRepaired(unsigned int amount){
	if (this->Energy_points > 0){		
		if (amount == 0){
			std::cout << "has cruelty taken upon you to give him false hope ? please allow him some more healing" << std::endl;
			return ;
		}
		if (amount >= 1 && amount <= 3){
			std::cout << name << " has eaten some monster candy, healing him for " << amount << std::endl;
			this->Hit_points += amount;
		}
		if (amount >= 4 && amount <= 7){
			std::cout << name << " has eaten heart shaped donuts, healing him for " << amount << std::endl;
			this->Hit_points += amount;
		}
		if (amount == 8 || amount == 9){
			std::cout << name << " has eaten a legendary hero sandwich, healing him for " << amount << std::endl;
			this->Hit_points += amount;
		}
		if ((this->Hit_points + amount) >= 10){
			std::cout << name << " has been fully healed!" << std::endl;
			this->Hit_points = 10;
		}
	}
}

void	ClapTrap::setStats(int	hp, int ad, int ep){
	this->Hit_points = hp;
	this->Attack_damage = ad;
	this->Energy_points = ep;
}

void	ClapTrap::setPrivateHp(int	Hp){
	this->Hit_points = Hp;
}

int	ClapTrap::getPrivateHp(){
	int	Hp = this->Hit_points;
	return (Hp);
}

void	ClapTrap::setPrivateAd(int Ad){
	this->Attack_damage = Ad;
}

int	ClapTrap::getPrivateAd(){
	int	Ad = this->Attack_damage;
	return (Ad);
}

void	ClapTrap::setPrivateEp(int Ep){
	this->Energy_points = Ep;
}

int	ClapTrap::getPrivateEp(){
	int	Ep = this->Energy_points;
	return (Ep);
}

std::string	ClapTrap::getPrivateName(){
	return (this->name);
}