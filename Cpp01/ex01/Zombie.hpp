/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:36:29 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/14 10:55:03 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie (void);
		Zombie (std::string name);
		~Zombie();
		void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );


#endif