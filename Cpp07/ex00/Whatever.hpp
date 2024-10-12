/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:02:06 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/15 14:14:45 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <ostream>


template< typename T>
void	swap(T&a, T&b){
	T swap = a;
	a = b;
	b = swap;
}

template< typename T>
T	min(T&a, T&b){
	if (a < b)
		return a;
	else
		return b;
}

template< typename T>
T max(T&a, T&b)
{
	if (a > b)
		return a;
	else
		return b;
}