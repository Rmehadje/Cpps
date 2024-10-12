/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:03:38 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/05 15:32:09 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	private:
			std::string	_firstName;
			std::string	_lastName;
			std::string	_nickName;
			std::string	_phoneNumber;
			std::string	_darkestSecret;
			int			_index;
			std::string		getInput(std::string, int flag);
	public:
		void		add(void);
		void		index(int i);
		void		view(int i);
		void		displayContact(void);
};

#endif