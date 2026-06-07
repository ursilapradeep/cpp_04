/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:35:36 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/07 07:56:19 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog: default Constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	type = "Dog";
	std::cout << "Dog: copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		std::cout << " Dog Assignation operator called " << std::endl;
		type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Dog: Woof Woof " << std::endl;
}
