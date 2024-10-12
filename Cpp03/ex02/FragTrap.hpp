/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:02:15 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/31 14:32:44 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &og);
		~FragTrap();
		void	Attack(const std::string	&target);
		void	highFiveGuys(void);
		void	AcceptHighFive(const std::string &target, int flag);
};




#endif