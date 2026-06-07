/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:51:44 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/06 15:15:06 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

class Cat
{
	protected:
	
	Cat::Cat();
	Cat::Cat(const Cat &other) : Animal(other);
	Cat &Cat::operator=(const Cat &other);
	Cat::~Cat()

	public:
	
	void Cat::makeSound() const;
}

