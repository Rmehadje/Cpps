/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:29:01 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/31 14:32:15 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
	FragTrap	Coach("coach");
	std::cout << std::endl;
	FragTrap	white_belt("white_belt");
	std::cout << std::endl;

	Coach.Attack("white_belt");
	std::cout << std::endl;
	white_belt.takeDamage(1);
	std::cout << std::endl;
	white_belt.beRepaired(1);
	std::cout << std::endl;
	
	
	Coach.highFiveGuys();
	std::cout << std::endl;
	white_belt.AcceptHighFive("Coach", 1);
	std::cout << std::endl;
}