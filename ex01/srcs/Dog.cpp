/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:35:36 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/11 16:38:59 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() 
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog: default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) 
{
	type = other.type;
	brain = new Brain(*other.brain); // Deep copy
	std::cout << "Dog: copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
	if (this != &other) 
	{
		std::cout << "Dog: assignment operator" << std::endl;
		type = other.type;
		if (brain)
			delete brain;
		brain = new Brain(*other.brain); // Deep copy
	}
	return *this;
}

Dog::~Dog() 
{
	delete brain;
	std::cout << "Dog: destructor" << std::endl;
}

void Dog::makeSound() const 
{
 std::cout << "Dog: Woof Woof" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea) 
{
 brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const 
{
 return brain->getIdea(index);
}

const std::string* Dog::getIdeaAddress(int index) const
{
 return brain->getIdeaAddress(index);
}

