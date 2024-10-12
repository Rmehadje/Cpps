/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:47:06 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/22 13:00:09 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::string	merge(char **argv){
    std::string result;
    for (int i = 1; argv[i]; ++i){
        result += argv[i];
        if (argv[i + 1])
            result += ' ';
    }
    return result;
}

int    checkInput(std::string input){
   if (input.empty()) return 1;
   std::istringstream iss(input);
   std::string token;
   while (iss >> token){
		for (int i = 0;token[i];i++)
       if (!std::isdigit(token[i]))
           return 1;
   }
   return 0;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return 1;
	std::string res = merge(argv);
	if (checkInput(res)){
        std::cerr << "please enter valid input" << std::endl;
	    return 1;
    }
	PmergeMe pm(res);
}