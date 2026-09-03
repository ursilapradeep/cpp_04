/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 05:22:12 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/03 16:21:59 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() 
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) 
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*other.brain); // Deep copy
}

Cat &Cat::operator=(const Cat &other) 
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other) 
	{
		Animal::operator=(other); // Call base class assignment operator
		brain = new Brain(*other.brain); // Deep copy
	}
	return *this;
}

Cat::~Cat() 
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const 
{
 std::cout << "Meow" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea) 
{
 brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const 
{
 return brain->getIdea(index);
}

Brain *Cat::getBrain() const
{
 return brain;
}
