/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:22:52 by uvadakku          #+#    #+#             */
/*   Updated: 2026/10/02 16:18:51 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

AAnimal::AAnimal(void) : type("Animal")
{
	std::cout << "AAnimal default Constructor called." << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal constructor called " << std::endl;
}

AAnimal::AAnimal(const AAnimal &other): type(other.type)
{
	std::cout << "AAnimal copy_constructor contructor called " << std::endl;
}

AAnimal:: ~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal assignment operator called " << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}
