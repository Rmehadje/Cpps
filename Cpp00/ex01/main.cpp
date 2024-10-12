/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:56:14 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/01 13:01:09 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main(int argc, char **argv){
	int	i = 0;
	PhoneBook pb;
	std::string	input = "";
	pb.mainPage();
	while (1)
	{
		std::cin >> input;
		if (input == "ADD"){
			pb.AddPage();
			pb.addToPb();
		}
		else if (input.compare("SEARCH") == 0){
			pb.viewContact();
		}
		else if (input.compare("EXIT") == 0)
			break;
	}
}
