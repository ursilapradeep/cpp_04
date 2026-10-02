/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 05:22:12 by uvadakku          #+#    #+#             */
/*   Updated: 2026/10/02 17:03:47 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : AAnimal(other) 
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain); // Deep copy
}

Cat::~Cat() 
{
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat &other) 
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other) 
	{
		AAnimal::operator=(other);
		new(this->brain) Brain(*other.brain); // Deep copy
	}
	return *this;
}

void Cat::makeSound() const 
{
 std::cout << "Meow" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea) 
{
 this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const 
{
 return this->brain->getIdea(index);
}

Brain *Cat::getBrain() const
{
 return this->brain;
}
