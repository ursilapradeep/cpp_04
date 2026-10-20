/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:35:36 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/02 15:25:26 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << " Dog Assignment operator called " << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Woof " << std::endl;
}
