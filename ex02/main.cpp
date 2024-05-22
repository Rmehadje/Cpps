/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:31:10 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/22 15:17:54 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int main()
{
	std::string stringOG = "HI THIS IS BRAIN";
	std::string	*stringp = &stringOG;
	std::string &stringr = stringOG;

	std::cout << "Adress of stringOG: " << &stringOG << std::endl;
	std::cout << "pointer value: " << stringp << std::endl;
	std::cout << "refrence value: " << &stringr << std::endl;

		
	std::cout << "value of OG: " << stringOG << std::endl;
	std::cout << "after pointer deferencing: " << *stringp << std::endl;
	std::cout << "after reference: " << stringr << std::endl;

	return 0;
}