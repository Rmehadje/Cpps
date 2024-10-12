/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:04:03 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/19 10:58:51 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string input){
	getInput(input);
	calculate();
}

RPN::RPN(const RPN &cp){
	if (this != &cp){
		input = cp.input;
		nbr = cp.nbr;
	}
}

RPN &RPN::operator=(const RPN &og){
	if (this != &og){
		input = og.input;
		nbr = og.nbr;
	}
	return *this;
}

RPN::~RPN(){}

void	RPN::getInput(std::string imp){
	for (int i = 0; i < imp.length(); i++){
		char c = imp[i];
		if (isdigit(c))
			input.push_back(c);
		else if (c == '+' || c == '-' || c == '*' || c == '/')
			input.push_back(c);
	}
}

void	RPN::calculate(){
	int a, b;
	for  (int i = 0; i < input.length(); i++){
		if (isdigit(input[i]))
			nbr.push((int)input[i] - '0');
		else{
			if (nbr.empty()){
				std::cerr << "Error" << std::endl;
				return ;
			}
			a = nbr.top();
			nbr.pop();
			if (nbr.empty()){
				std::cerr << "Error" << std::endl;
				return ;
			}
			b = nbr.top();
			nbr.pop();
			switch(input[i]){	
				case '+':
					a = a + b;
					break ;
				case '-':
					a = b - a;
					break ;
				case '*':
					a = a * b;
					break ;
				case '/':
					a = b / a;
					break ;
				}
			nbr.push(a);
		}
	}
	std::cout << "result: " << nbr.top() << std::endl;
}