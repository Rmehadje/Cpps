/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:10:36 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/18 10:48:36 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>
#define RED "\033[1;31m"
#define GREEN "\033[0;32m"
#define DEFAULT "\033[1;39m"

class BitcoinExchange{
	private:
		std::map<std::string, float> Database;
	public:
		BitcoinExchange(const std::string &fn);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cp);
		BitcoinExchange &operator=(const BitcoinExchange &og);

		void	loadDataBase(const std::string &fn);
		float	calculate(const std::string &date, float price);
};
	bool	checkDate(const std::string &date);