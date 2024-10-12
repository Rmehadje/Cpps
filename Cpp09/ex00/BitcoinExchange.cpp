/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:52:23 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/18 10:52:40 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string const &fn){
	loadDataBase(fn);
}

BitcoinExchange::~BitcoinExchange(){
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &og){
	if (this != &og){
		this->Database = og.Database;
	}
	return *this;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &cp){
	this->Database = cp.Database;
}


void	BitcoinExchange::loadDataBase(const std::string &fn){
	std::ifstream file(fn.c_str());
	if (!file.is_open())
		throw std::runtime_error("couldn't open file");
	std::string line;
	while (std::getline(file, line)){
		std::stringstream ss(line);
		std::string date;
		std::getline(ss, date, ',');
		std::string prices;
		std::getline(ss, prices);
		std::stringstream ssPrice(prices);
		float price;
		ssPrice >> price;
		Database[date] = price;
	}
}

float	BitcoinExchange::calculate(const std::string &date, float price){
	std::map<std::string, float>::iterator it = Database.lower_bound(date);
	if (it == Database.end() || it->first != date){
		if (it == Database.begin()) {
			std::cerr << RED << "Error: bad input => " << date << DEFAULT << std::endl;
			return 0;
		}
		--it;
	}
	float bcPrice = it->second;
	return price * bcPrice;
}

bool	checkDate(const std::string &date){
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	int year;
	int month;
	int day;
	if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	if (month == 4 || month == 6 || month == 9 || month == 11){
		if (day > 30)
			return false;
	if (month == 2){
		if (day > 29)
			return false;
		if (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))
			return false;
		}	
	}
	return true;
}
