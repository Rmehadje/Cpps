/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:52:48 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/10 10:16:23 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"


void PhoneBook::mainPage(void)
{
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~Welcome to your Awesome PhoneBook~~~~~~~~~~";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "        you may add a contact by typing ADD";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "     to find one of your contacts by typing SEARCH";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "         Type EXIT to leave the simulation";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	std::cout << std::endl;
}
void	PhoneBook::AddPage(void)
{
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	std::cout << std::endl;
	std::cout << "Please Add a contact through the following instructions:";
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	std::cout << std::endl;
}

void	PhoneBook::addToPb(void){
	static int	i;
	
	this->Contact[i % 8].add();
	this->Contact[i % 8].index(i % 8);
	i++;
	
}


int	PhoneBook::readIndex(void){
	int		index = 1;
	std::string		str;
	std::cout << "please enter the index of the contact you'd like to view: " << std::flush;
	while (1)
	{
		std::cin >> str;
		if (std::cin.good() && (str[0] >= '1' && str[0] <= '8')){
			index = std::stoi(str) - 1;
			break ;
		}
		else
		{
			std::cout << "the index is invalid, please try again" << std::endl;
			std::cin.clear();
		}
	}	
	this->Contact[index].displayContact();
	return (index);
}

void	PhoneBook::viewContact(){
	
	std::cout << "~~~~~~~~~~~~~~~~Your Contacts~~~~~~~~~~~~~~~~" << std::endl;
	for(int i = 0; i < 8; i++){
		this->Contact[i].view(i);
	}
	this->readIndex();
}
