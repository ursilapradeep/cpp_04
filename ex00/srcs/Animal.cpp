/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:22:52 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/10 08:59:15 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal Constructor creates animal. Type: Animal" << std::endl;
}

Animal::Animal(const Animal &other): type(other.type)
{
	std::cout << "Animal copy_constructor copies Animal from Type: " << other.type << std::endl;
}

Animal:: ~Animal(void)
{
	std::cout << "Animal destructor: " << this->type << std::endl;
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
	std::cout << "An Animal without a specific type does not make sounds " << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}

