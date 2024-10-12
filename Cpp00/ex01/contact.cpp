/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:33:08 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/05 15:45:05 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::getInput(std::string str, int flag)
{
	std::string input;
	bool		valid = false;
	std::cout << str << std::flush;
	do
	{
		std::getline(std::cin, input); 
		if (std::cin.good() || !input.empty())
			valid = true;
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin.clear();
			std::cout << "the input is invalid, please try again";
		}
		if (flag && valid) {
			for (int i = 0; i < input.length(); ++i) {
				if (!isdigit(input[i])) {
					valid = false;
					std::cout << "invalid input, please enter a valid phone number: ";
					break ;
				}
			}
		}
	} while (!valid);
	return (input);
}

void	Contact::index(int i){
	this->_index = i;
}

void	Contact::view(int i){
	std::string tmp;
	if (this->_firstName.empty())
		return;
	std::cout << "|" << std::setw(10) << std::right << i + 1 << std::flush;
	if (this->_firstName.length() > 10)
		std::cout << "|" << std::setw(10) << std::right << (this->_firstName.substr(0, 9) + ".") << std::flush;
	else
	std::cout << "|" << std::setw(10) << std::right << (this->_firstName) << std::flush;
	if (this->_lastName.length() > 10)
		std::cout << "|" << std::setw(10) << std::right << (this->_lastName.substr(0, 9) + ".") << std::flush;
	else
	std::cout << "|" << std::setw(10) << std::right << (this->_lastName) << std::flush;
	if (this->_nickName.length() > 10)
		std::cout << "|" << std::setw(10) << std::right << (this->_nickName.substr(0, 9) + ".") << std::flush;
	else
		std::cout << "|" << std::setw(10) << std::right << (this->_nickName) << std::flush;
	std::cout << "|" << std::endl;	
}


void	Contact::add(void)
{
	std::cin.ignore();
	this->_firstName = this->getInput("please enter your first name: ", 0);
	this->_lastName = this->getInput("please enter your last name: ", 0);
	this->_nickName = this->getInput("please enter your nickname: ", 0);	
	this->_phoneNumber = this->getInput("please enter your phone number: ", 1);
	this->_darkestSecret = this->getInput("please enter your darkest secret: ", 0);

}


void	Contact::displayContact(void){
	if (this->_firstName.empty() || this->_lastName.empty()){
		std::cout << "Cannot find a contact, try with a lower index!" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "first name: " << this->_firstName << std::endl;
	std::cout << "last name: " << this->_lastName << std::endl;
	std::cout << "nickname: " << this->_nickName << std::endl;
	std::cout << "phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
	std::cout << std::endl;
}