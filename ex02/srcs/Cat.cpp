/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 05:22:12 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/14 10:29:28 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

#include <string>
#include <iostream>

Cat::Cat() : AAnimal(), brain(new Brain())
{
	type = "Cat";
	// brain = new Brain();
	// std::cout << "Cat: default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other) 
{
	type = other.type;
	brain = new Brain(*other.brain); // Deep copy
	std::cout << "Cat: copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
	if (this != &other) 
	{
		std::cout << "Cat: assignment operator" << std::endl;
		type = other.type;
		if (brain)
			delete brain;
		brain = new Brain(*other.brain); // Deep copy
	}
	return *this;
}

Cat::~Cat() 
{
	delete brain;
	std::cout << "Cat: destructor" << std::endl;
}

void Cat::makeSound() const 
{
 std::cout << "Cat: Woof Woof" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea) 
{
 brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const 
{
 return brain->getIdea(index);
}

const std::string* Cat::getIdeaAddress(int index) const
{
 return brain->getIdeaAddress(index);
}

