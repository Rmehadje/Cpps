/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:03:24 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/10 11:56:17 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
private:
	Contact			Contact[8];
public:
	void				viewContact();
	void				addToPb(void);
	void				mainPage(void);
	void				AddPage(void);
	int				readIndex(void);
};

#endif