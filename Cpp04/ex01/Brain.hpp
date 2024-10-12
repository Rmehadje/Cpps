/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:31:15 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/04 13:03:52 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>


class Brain{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(std::string name);
		Brain(const Brain &copy);
		Brain &operator=(const Brain &og);
		~Brain();
};



#endif