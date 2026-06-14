/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:22:52 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/14 11:52:53 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

AAnimal::AAnimal(void) : type("Animal")
{
	std::cout << "AAnimal Constructor creates animal. Type: Animal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other): type(other.type)
{
	std::cout << "AAnimal copy_constructor copies Animal from Type: " << other.type << std::endl;
}

AAnimal:: ~AAnimal(void)
{
	std::cout << "AAnimal destructor: " << this->type << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "AAnimal copy assignment operator " << std::endl;
	return *this;
}

void AAnimal::makeSound(void) const
{
	std::cout << "An AAnimal sound " << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}

