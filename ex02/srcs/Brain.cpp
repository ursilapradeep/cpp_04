/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:49:14 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/14 09:01:59 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <string>
#include <iostream>

Brain::Brain() 
{
 std::cout << "Brain: default constructor" << std::endl;
}

Brain::Brain(const Brain &other) 
{
	std::cout << "Brain: copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other) 
{
	if (this != &other) 
	{
		std::cout << "Brain: assignment operator" << std::endl;
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain() 
{
 std::cout << "Brain: destructor" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea) 
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string Brain::getIdea(int index) const 
{
	if (index >= 0 && index < 100)
		return ideas[index];
	return "";
}

const std::string* Brain::getIdeaAddress(int index) const
{
	if (index >= 0 && index < 100)
		return &ideas[index];
	return nullptr;
}
