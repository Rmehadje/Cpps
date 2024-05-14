/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:50:26 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/13 11:21:25 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

	Zombie	*heapZombie = new Zombie("Jimmy");
	heapZombie->announce();
	delete heapZombie;

	Zombie	zbel("Billy");
	zbel.announce();

	std::cout << "randomChump(bozo) is coming...\n" << std::flush;
	randomChump("bozo");
	
	return (0);
}
