/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:06:13 by rmehadje          #+#    #+#             */
/*   Updated: 2024/06/14 13:21:13 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();
	meta->makeSound();



	const	WrongAnimal* alien = new WrongAnimal();
	const	WrongCat* UpsideDownCat = new WrongCat();
	std::cout << UpsideDownCat->getType() << ": ";
	UpsideDownCat->makeSound();
	std::cout << alien->getType() << ": ";
	alien->makeSound();

	delete meta;
	delete j;
	delete i;
	delete alien;
	delete UpsideDownCat;
	
	return 0;
}