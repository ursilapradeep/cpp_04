/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:21:44 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/10 08:58:28 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "Wrong Animal Constructor creates Wrong animal. Type: Wrong Animal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type)
{
	std::cout << "WrongAnimal copy_constructor copies WrongAnimal from Type: " << other.type << std::endl;
}

WrongAnimal:: ~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor: " << this->type << std::endl;
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
	std::cout << "An WrongAnimal without a specific type does not make sounds " << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}


