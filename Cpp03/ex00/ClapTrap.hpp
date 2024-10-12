/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:05:07 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/29 12:27:22 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <cstdlib>
#include <string>

class	ClapTrap
{
	private:
		std::string	name;
		int	Hit_points;
		int	Energy_points;
		int	Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string	name);
		ClapTrap(const	ClapTrap	&copy);
		ClapTrap	&operator=(const	ClapTrap	&og);
		~ClapTrap();

		void	Attack(const std::string &target);
		void	takeDamage(unsigned int	amount);
		void	beRepaired(unsigned int	amount);
		void	amountRepaired(unsigned int amount);
		void	setStats(int	hp, int ad, int ep);

};




#endif
