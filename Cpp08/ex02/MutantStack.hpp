/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:52:42 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/10 12:01:35 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <deque>
#include <stack>
#include <list>
#include <string>


template <typename T>
class MutantStack: public std::stack<T>{
	public:
	MutantStack(): std::stack<T>() {};
	MutantStack(const MutantStack &cp): std::stack<T>(cp){};
	virtual ~MutantStack() {};

	typedef typename std::deque<T>::iterator iterator;
	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}
};