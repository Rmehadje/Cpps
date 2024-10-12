/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
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
=======
/*   Created: 2024/05/24 12:19:07 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/24 13:42:41 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int	main()
{
	Fpn	a;
	Fpn	b( a );
	Fpn	c;

	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
>>>>>>> Cpp02/master
