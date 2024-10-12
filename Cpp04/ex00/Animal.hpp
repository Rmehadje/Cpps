/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:00:10 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 11:32:07 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>


class	Animal{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string	name);
		Animal(const	Animal	&copy);
		Animal	&operator=(const	Animal	&og);
		virtual ~Animal();

		std::string	getType(void) const;
		void	setType(std::string Type);
		virtual void	makeSound()const;
};


#endif