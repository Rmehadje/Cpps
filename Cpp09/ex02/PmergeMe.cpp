/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:09:27 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/22 12:47:50 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::string input){
	std::cout << "Before: " << input << std::endl;
	fillInput(input);
	long long startTime = getCurrentTime();
	std::list<int> sortedList = FJSlist(this->list);
	long long endTime = getCurrentTime();
	long long timeList = endTime - startTime;
	startTime = getCurrentTime();
	std::vector<int> sortedVec = FJSvector(this->vec);
	endTime = getCurrentTime();
	long long timeVec = endTime - startTime;
	std::cout << "After: ";
	for (std::vector<int>::iterator it = sortedVec.begin(); it != sortedVec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Time for vectors: " << timeVec << "Ms" << std::endl;
	std::cout << "Time for lists: " << timeList << "Ms" << std::endl;
	
}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &cp){
	this->vec = cp.vec;
	this->list = cp.list;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &og){
	if (this != &og){
		*this = og;
	}
	return	*this;
}


void	PmergeMe::fillInput(std::string input){
	std::istringstream iss(input);
	std::string token;
	while (iss >> token){
		int value = std::atoi(token.c_str());
		this->vec.push_back(value);
		this->list.push_back(value);
	}
}



std::list<int> PmergeMe::mergeList(const std::list<int> &left, const std::list<int> &right){
	std::list<int> result;
	std::list<int>::const_iterator it1 = left.begin();
	std::list<int>::const_iterator it2 = right.begin();
	while (it1 != left.end() && it2 != right.end()){
		if (*it1 <= *it2)
			result.push_back(*it1++);
		else
			result.push_back(*it2++);
	}
	result.insert(result.end(), it1, left.end());
	result.insert(result.end(), it2, right.end());
	return result;
}

void	PmergeMe::listInsert(std::list<int> &sortedList, int value){
	std::list<int>::iterator it;
	for (it = sortedList.begin(); it != sortedList.end(); it++){
		if (value < *it){
			sortedList.insert(it, value);
			return;
		}
	}
	sortedList.push_back(value);
}

std::list<int> PmergeMe::FJSlist(std::list<int> &inputList){
	if (inputList.size() <= 1)
		return inputList;
	std::list<int>::iterator it = inputList.begin();
	std::advance(it, inputList.size() / 2);
	std::list<int> lefthalf(inputList.begin(), it);
	std::list<int> righthalf(it, inputList.end());
	lefthalf = FJSlist(lefthalf);
	righthalf = FJSlist(righthalf);
	std::list<int> sortedList = mergeList(lefthalf, righthalf);
	return sortedList;
}

std::vector<int> PmergeMe::mergeVector(const std::vector<int> &left, const std::vector<int> &right){
	std::vector<int> result;
	std::vector<int>::const_iterator it1 = left.begin();
	std::vector<int>::const_iterator it2 = right.begin();
	while (it1 != left.end() && it2 != right.end()){
		if (*it1 <= *it2)
			result.push_back(*it1++);
		else
			result.push_back(*it2++);
	}
	result.insert(result.end(), it1, left.end());
	result.insert(result.end(), it2, right.end());
	return result;
}

void	PmergeMe::vecInsert(std::vector<int> &sortedvec, int value){
	std::vector<int>::iterator it;
	for (it = sortedvec.begin(); it != sortedvec.end(); it++){
		if (value < *it){
			sortedvec.insert(it, value);
			return;
		}
	}
	sortedvec.push_back(value);
}

std::vector<int> PmergeMe::FJSvector(std::vector<int> &inputvec){
	if (inputvec.size() <= 1)
		return inputvec;
	std::vector<int>::iterator it = inputvec.begin();
	std::advance(it, inputvec.size() / 2);
	std::vector<int> lefthalf(inputvec.begin(), it);
	std::vector<int> righthalf(it, inputvec.end());
	lefthalf = FJSvector(lefthalf);
	righthalf = FJSvector(righthalf);
	std::vector<int> sortedvec = mergeVector(lefthalf, righthalf);
	return sortedvec;
}

