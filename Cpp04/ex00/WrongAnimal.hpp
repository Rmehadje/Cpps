/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:20:33 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/03 14:23:41 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>


class	WrongAnimal{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(std::string	name);
		WrongAnimal(const	WrongAnimal	&copy);
		WrongAnimal	&operator=(const	WrongAnimal	&og);
		~WrongAnimal();

		std::string	getType(void) const;
		void	setType(std::string Type);
		void	makeSound()const;
};


#endif