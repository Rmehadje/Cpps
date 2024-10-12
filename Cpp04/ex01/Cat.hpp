/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:34:29 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 12:08:13 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Cat: public Animal{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(std::string	name);
		Cat(const	Cat	&copy);
		Cat	&operator=(const	Cat	&og);
		virtual ~Cat();
		void	makeSound()const;
		Brain	*getBrain();
};


#endif