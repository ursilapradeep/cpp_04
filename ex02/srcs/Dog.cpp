/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:35:36 by uvadakku          #+#    #+#             */
/*   Updated: 2026/10/02 17:05:18 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other) 
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain); // Deep copy
}

Dog &Dog::operator=(const Dog &other) 
{
	std::cout << "Dog: assignment operator" << std::endl;
	if (this != &other) 
	{
		AAnimal::operator=(other);
		new (this->brain) Brain(*other.brain); // Deep copy
	}
	return *this;
}

Dog::~Dog() 
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const 
{
 std::cout << " Woof Woof" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea) 
{
 this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const 
{
 return this->brain->getIdea(index);
}

Brain *Dog::getBrain() const 
{
 return this->brain;
}
