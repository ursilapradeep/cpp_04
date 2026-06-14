/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:11:28 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/14 08:08:40 by uvadakku         ###   ########.fr       */
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
	std::cout << "=== Brain ideas deep-copy tests ===\n";
	
	Dog d1;
	d1.setIdea(0, "Chase ball");
	Dog d2 = d1;

	std::cout << "Dog d1 idea[0] address: " << d1.getIdeaAddress(0) << "\n";
	std::cout << "Dog d2 idea[0] address: " << d2.getIdeaAddress(0) << "\n";

	if (d1.getIdeaAddress(0) == d2.getIdeaAddress(0)) 
	{
		std::cout << "WARNING: Shallow copy detected! Same brain address.\n";
	} 
	else 
	{
		std::cout << "SUCCESS: Deep copy confirmed! Different brain addresses.\n";
	}

	// Change d1 to prove independence
	d1.setIdea(0, "Chewbone");
	std::cout << "d1 idea[0]: " << d1.getIdea(0) << "\n";
	std::cout << "d2 idea[0]: " << d2.getIdea(0) << "\n";

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

