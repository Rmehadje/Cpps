/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:44:09 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/18 10:51:05 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << RED << "Error: couldn't open the file " << DEFAULT <<std::endl;
		return 1;
	}
	
	BitcoinExchange btc("data.csv");
	std::ifstream inputeFile(argv[1]);

	if (!inputeFile.is_open()){		
		std::cerr << RED << "Error: couldn't open the file " + std::string(argv[1]) << DEFAULT <<std::endl;
		return 1;
	}
	
	std::string line;
	std::getline(inputeFile, line);
	
	while (std::getline(inputeFile, line)){
		std::stringstream ss(line);
		std::string date;
		std::getline(ss, date, '|');
		date.erase(std::remove(date.begin(), date.end(), ' '), date.end());

		std::string prices;
		std::getline(ss, prices);
		char *end;
		float price = std::strtof(prices.c_str(), &end);
		if (!checkDate(date)){
			std::cerr << RED << "Error: bad input " << date << DEFAULT << std::endl;
			continue ;
		}
		if (end == prices.c_str()){
			std::cerr << RED << "Error: invalid float format." << DEFAULT << std::endl;
			continue ;
		}
		if (price < 0){
			std::cerr << RED << "Error: not a positive number." << DEFAULT << std::endl;
			continue ;
		}
		if (price > 1000){
			std::cerr << RED << "Error: too large a number." << DEFAULT << std::endl;
			continue ;
		}
		float result = btc.calculate(date, price);
		std::cout << GREEN << date << " -> " << price << " = " << result << DEFAULT << std::endl;
	}
	return 0;
}