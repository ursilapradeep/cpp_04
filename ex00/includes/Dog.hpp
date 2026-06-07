/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:05:46 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/06 15:15:21 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

class Dog
{
	protected:
	
	Dog::Dog();
	Dog::Dog(const Dog &other) : Animal(other);
	Dog &Dog::operator=(const Dog &other);
	Dog::~Dog()

	public:
	
	void Dog::makeSound() const;
}
