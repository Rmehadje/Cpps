/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:42:53 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/19 10:21:30 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cstdlib>
#include <sstream>

class RPN{
	private:
		std::string input;
		std::stack<int> nbr;
	public:
		RPN(std::string input);
		~RPN();
		RPN(const RPN &cp);
		RPN &operator=(const RPN &og);
		void	getInput(std::string input);
		void	calculate();
};