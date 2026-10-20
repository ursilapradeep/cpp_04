/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 05:22:12 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/02 15:22:32 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << " Cat Assignment operator called " << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "Meow" << std::endl;
}
