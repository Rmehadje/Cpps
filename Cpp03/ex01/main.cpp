/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:29:01 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/13 10:29:45 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ScavTrap rat("rat");
	std::cout << std::endl;
	ClapTrap	broom("broom");
	std::cout << std::endl;
	ScavTrap	rat2( rat );
	std::cout << std::endl;
	ScavTrap entity("entity");
	std::cout << std::endl;
	entity = rat;
	std::cout << std::endl;

	broom.Attack("rat");
	std::cout << std::endl;
	rat.takeDamage(10);
	std::cout << std::endl;
	rat.Attack("broom");
	std::cout << std::endl;
	broom.takeDamage(20);
	std::cout << std::endl;
	std::cout << std::endl;
	rat.guardGate();

	return EXIT_SUCCESS;
}