/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:21:50 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/22 12:42:45 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <list>
#include <ctime>
#include <sstream>


class PmergeMe{
	private:
		std::vector<int> vec;
		std::list<int> list;
	public:
		PmergeMe(std::string input);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &og);
		PmergeMe(const PmergeMe &cp);
		void	fillInput(std::string input);

		std::list<int> mergeList(const std::list<int> &left, const std::list<int> &right);
		void listInsert(std::list<int>& sortedList, int value);
		std::list<int>	FJSlist(std::list<int> &inputlist);
		
		std::vector<int> mergeVector(const std::vector<int> &left, const std::vector<int> &right);
		void vecInsert(std::vector<int> &sortedvec, int value);
		std::vector<int>	FJSvector(std::vector<int> &inputvec);
		
		static long long getCurrentTime(){
			clock_t time = clock();
			return (time * 1000000) / CLOCKS_PER_SEC;
		}
};