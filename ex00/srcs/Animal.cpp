/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:22:52 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/02 15:41:29 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor called " << type << std::endl;
}

Animal::Animal(const Animal &other): type(other.type)
{
	std::cout << "Animal copy constructor called " << other.type << std::endl;
}

Animal:: ~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "Animal copy assignment operator " << std::endl;
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

