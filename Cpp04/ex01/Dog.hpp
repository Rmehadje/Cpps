/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:35:38 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 12:39:07 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Dog: public Animal{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(std::string	name);
		Dog(const	Dog	&copy);
		Dog	&operator=(const	Dog	&og);
		virtual ~Dog();
		void	makeSound() const;
		Brain	*getBrain();
};


#endif