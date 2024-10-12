/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:40:49 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/09 12:00:56 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <string>
#include <cctype>

template < typename T>
void	iter(T *array, int length, void (*f)(T const &)){
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	print(T const &c){
	std::cout << c;
}

bool toUpper = true;

template <typename T>
void	goofyPrint(T const &c){
	if (toUpper)
		std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
	else
		std::cout << static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
	toUpper = !toUpper;
}
