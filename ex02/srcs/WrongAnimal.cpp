/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:21:44 by uvadakku          #+#    #+#             */
/*   Updated: 2026/10/02 16:48:35 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type)
{
	std::cout << "WrongAnimal copy_constructor called  " << std::endl;
}

WrongAnimal:: ~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called " << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called " << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "An WrongAnimal without a specific type does not make sounds " << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}


