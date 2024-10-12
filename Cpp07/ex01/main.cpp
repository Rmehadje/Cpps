/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:56:00 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/15 10:43:17 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main (){
	std::string str = "testing the iteration operation";
	char	ar[] = {'A', 'B', 'C'};
	toUpper = true;
	iter(str.c_str(), str.length(), print);
	std::cout << std::endl;
	iter(str.c_str(), str.length(), goofyPrint);
	std::cout << std::endl;
	iter(ar, sizeof(ar), goofyPrint);

	return 0;
}