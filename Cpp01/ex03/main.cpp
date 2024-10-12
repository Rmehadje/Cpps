/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:52:45 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/20 14:24:19 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.Attack();
	club.setType("some other type of club");
	bob.Attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	HumanB notsmart("notsosmart");
	notsmart.Attack();
	jim.setWeapon(club);
	jim.Attack();
	club.setType("some other type of club");
	jim.Attack();
}
	return 0;
}