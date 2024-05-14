/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:50:26 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/14 13:40:23 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int i = 0;

	Zombie* horde = zombieHorde(6, "jim bob");
	for(i = 0; i < 6; i++){	
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
