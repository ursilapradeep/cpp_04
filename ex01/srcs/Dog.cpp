/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:35:36 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/03 16:38:08 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() 
{
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) 
{

	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain); // Deep copy
}

Dog &Dog::operator=(const Dog &other) 
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) 
	{
		
		Animal::operator=(other); // Call base class assignment operator
		brain = new Brain(*other.brain); // Deep copy
	}
	return *this;
}

Dog::~Dog() 
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const 
{
 std::cout << "Woof" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea) 
{
 brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const 
{
 return brain->getIdea(index);
}

Brain *Dog::getBrain() const
{
 return brain;
}
