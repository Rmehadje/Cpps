/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:58:13 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/16 14:14:25 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::list<int> list;
	mstack.push(6);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(-10);
	mstack.push(90);
	list.push_back(6);
	list.push_back(17);
	list.pop_back();
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(-10);
	list.push_back(90);
	std::cout << std::endl;
	std::cout << "top element for the mutant stack: " << mstack.top() << std::endl;
	std::cout << "top element for the list: " << list.back() << std::endl;
	std::cout << "mutant stack size: "<<  mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator itls = list.begin();
	std::list<int>::iterator itlse = list.end();
	std::cout << "iterating through the mutant stack" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "list size: "<<  list.size() << std::endl;
	std::cout << "iterating through the list" << std::endl;
	while (itls != itlse){
		std::cout << *itls << std::endl;
		++itls;
	}
	std::stack<int> s(mstack);
	return 0;
}