/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:21:50 by uvadakku          #+#    #+#             */
/*   Updated: 2026/10/02 16:59:57 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{

	std::cout << "WrongCat default Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Assignment operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const 
{
	std::cout << "click click" << std::endl;
}

