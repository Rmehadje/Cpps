/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:50:26 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/11 10:23:22 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

	Zombie	*heapZombie = new Zombie("Jimmy");
	heapZombie->announce();
	delete heapZombie;

	Zombie	billy("Billy");
	billy.announce();

	Zombie *Zombiee = newZombie("brainEater");
	Zombiee->announce();
	delete Zombiee;

	std::cout << "randomChump() is coming...\n" << std::flush;
	randomChump("bozo");
	
	return (0);
}
