/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
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
=======
/*   Created: 2024/05/24 12:19:07 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/27 15:48:16 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fpn a;
	Fpn const b( 10 );
	Fpn const c( 42.42f );
	Fpn const d( b );
	a = Fpn( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}
>>>>>>> Cpp02/master
