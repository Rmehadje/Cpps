/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:25:03 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/15 10:28:47 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	Array<int> a(10);

	try{
		a[4] = 8;
		std::cout << a[0] << std::endl;
	} catch (std::exception &e){
		std::cout << "index out of range" << std::endl;
	}
	return 0;
}