/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:25:17 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/15 10:27:33 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <string>


template <typename T>
class Array{
	private:
		T* array;
		unsigned int n;
	public:
		Array(){
			n = 0; 
			array = new T[0];};

		Array(unsigned int n): n(n) { array = new T[n];};
		
		Array(const Array &cp): n(cp.n){
			array = new T[n];
			for (int i = 0; i < n; i++)
				array[i] = cp.array[i];
		};

		Array &operator=(const Array &og){
			if ( this != &og){
				delete[] array;
				n = og.n;
				array = new T[n];
				for (int i = 0; i < n; i++)
					array[i] = og.array[i];
			}
			return array;
		};

		T	&operator[](int i) const{
			if (i >= n){
				throw std::exception();
			}
			return array[i];
		}
	
		~Array(){ delete[] array;};
		int	size() const { return n;};
};