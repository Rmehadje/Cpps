/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:32:02 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/22 14:03:07 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl;
	std::string	input;

	while (1)
	{
		std::cout << "please enter a level for Harl: " << std::flush;
		std::getline(std::cin, input);
		harl.complain(input);
		if (input == "exit")
			break ;
	}
	return 1;
}