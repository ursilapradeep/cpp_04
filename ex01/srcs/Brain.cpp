/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:49:14 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/03 16:38:20 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() 
{
 std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) 
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other; // Use assignment operator for deep copy
}

Brain &Brain::operator=(const Brain &other) 
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other) 
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() 
{
 std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea) 
{
	if (index >= 0 && index < 100)
	{
		ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) const 
{
	if (index >= 0 && index < 100)
	{
		return ideas[index];
	}
	return "";
}

void Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (!ideas[i].empty())
		{
			std::cout << "Idea "<< i << ":" << ideas[i] << std::endl;
		}
	}
}

