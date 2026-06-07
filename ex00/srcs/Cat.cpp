/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 05:22:12 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/06 14:11:44 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat: default Constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	type = "Cat";
	std::cout << "Cat: copy Constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		std::cout << " Cat Assignation operator called " << std::endl;
		type = other.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << " Cat::Meow " << std::endl;
}
