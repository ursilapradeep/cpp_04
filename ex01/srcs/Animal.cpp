/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:22:52 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/03 16:21:59 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other): type(other.type)
{
	std::cout << "Animal copy constructor called "<< std::endl;
}

Animal:: ~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound " << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}

