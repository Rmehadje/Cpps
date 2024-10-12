/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:29:01 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/13 10:44:55 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	
	ClapTrap rat("rat");
	ClapTrap	broom("broom");
	broom.Attack("rat");
	rat.takeDamage(3);
	broom.Attack("rat");
	rat.takeDamage(3);
	broom.Attack("rat");
	rat.takeDamage(3);
	broom.Attack("rat");
	rat.takeDamage(3);
	broom.Attack("rat");
	rat.takeDamage(3);
	rat.Attack("broom");
	rat.beRepaired(3);
	rat.Attack("broom");
	broom.takeDamage(3);
	broom.beRepaired(3);
	broom.Attack("rat");
	rat.Attack("broom");
	broom.takeDamage(3);
	broom.amountRepaired(3);
	rat.Attack("broom");
	broom.takeDamage(3);
	broom.Attack("rat");
}