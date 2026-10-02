/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:11:28 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/16 11:54:26 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() 
{
	std::cout << "\nPolymorphism Array & Virtual Destructor\n";
	{
		const int size = 4;
		const AAnimal *animals[size];
		
		// Fill half with Dogs, half with Cats
		for (int i = 0; i < size; i++)
		{
			if (i < size / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << "--- Deleting animals (Watch destructors carefully) ---\n";
		for (int i = 0; i < size; i++) 
		{
			delete animals[i];
		}
	}
	return 0;
}

