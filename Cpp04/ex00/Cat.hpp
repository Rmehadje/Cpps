/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:34:29 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/03 13:45:40 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class	Cat: public Animal{
	public:
		Cat();
		Cat(std::string	name);
		Cat(const	Cat	&copy);
		Cat	&operator=(const	Cat	&og);
		~Cat();
		void	makeSound()const;
};


#endif