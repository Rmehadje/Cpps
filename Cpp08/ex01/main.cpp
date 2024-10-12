/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:32:14 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/16 12:40:22 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main() {
   Span sp(6);
   int numb[] = {34, 8, 2, 9, 13};
   sp.addNumber(numb, 5);
	sp.rangeVec();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;	
	try{
		sp.addNumber(3);
		sp.rangeVec();
	} catch (std::exception &e) {
		std::cerr << "error" << std::endl;
	}
	try{
		sp.addNumber(4);
		sp.rangeVec();
	} catch (std::exception &e) {
		std::cerr << "error" << std::endl;
	}
	return 0;
}
