/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:21:44 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/02 15:37:41 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongAnimal::WrongAnimal() 
{
	std::cout << "WrongAnimal default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type)
{
	std::cout << "WrongAnimal copy_constructor called" << std::endl;
}

WrongAnimal:: ~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called " << this->type << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "WrongAnimal copy assignment operator " << std::endl;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound " << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}


