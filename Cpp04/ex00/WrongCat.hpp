/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:24:37 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/03 14:24:38 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class	WrongCat: public WrongAnimal{
	public:
		WrongCat();
		WrongCat(std::string	name);
		WrongCat(const	WrongCat	&copy);
		WrongCat	&operator=(const	WrongCat	&og);
		~WrongCat();
		void	makeSound()const;
};


#endif