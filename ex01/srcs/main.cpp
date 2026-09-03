/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:11:28 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/03 16:17:41 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main() 
{
	const int size = 4;
	const Animal *animals[size];

	//fill had with dogs and half with cats
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "--- Deleting animals---\n";
	for (int i = 0; i < size; i++) 
	{
		delete animals[i];
	}

	std::cout << "=== Brain ideas deep-copy tests ===\n";
	{
		Dog d1;
		d1.setIdea(0, "Chase ball");
		Dog d2(d1); // Copy constructor

		std::cout << "d1 idea[0]: "<< d1.getIdea(0) << std::endl;
		std::cout << "d2 idea[0]: "<< d2.getIdea(0) << std::endl;

		std::cout << "Brain addresses:\n";
		std::cout << "d1 Brain address: " << d1.getBrain() << "\n";
		std::cout << "d2 Brain address: " << d2.getBrain() << "\n";
		// Modify d1 to prove independence
		d1.setIdea(0, "Chewbone");
		std::cout << "d1 idea[0]: " << d1.getIdea(0) << "\n";
		std::cout << "d2 idea[0]: " << d2.getIdea(0) << "\n";
	}

	std::cout << "=== Cat Brain ideas deep-copy tests ===\n";
	{
		Cat c1;
		c1.setIdea(0, "Sleep on couch");
		Cat c2(c1); // Copy constructor

		std::cout << "c1 idea[0]: "<< c1.getIdea(0) << std::endl;
		std::cout << "c2 idea[0]: "<< c2.getIdea(0) << std::endl;

		std::cout << "Brain addresses:\n";
		std::cout << "c1 Brain address: " << c1.getBrain() << "\n";
		std::cout << "c2 Brain address: " << c2.getBrain() << "\n";
		// Modify c1 to prove independence
		c1.setIdea(0, "Climb tree");
		std::cout << "c1 idea[0]: " << c1.getIdea(0) << "\n";
		std::cout << "c2 idea[0]: " << c2.getIdea(0) << "\n";
	}
	return 0;
}

