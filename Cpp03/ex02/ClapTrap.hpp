/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:05:07 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/13 10:31:36 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
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
		void	setPrivateHp(int	Hp);
		int	getPrivateHp();
		void	setPrivateAd(int	Ad);
		int	getPrivateAd();
		void	setPrivateEp(int	Ep);
		int	getPrivateEp();
		std::string	getPrivateName();
};




#endif
