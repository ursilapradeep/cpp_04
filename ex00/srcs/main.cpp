/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:11:28 by uvadakku          #+#    #+#             */
/*   Updated: 2026/10/05 13:06:09 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal *meta = new Animal(); 
	const Animal *i = new Dog();
	const Animal *j = new Cat();
	
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	
	i->makeSound(); //will output the Dog sound! 
	j->makeSound(); //will output the Cat sound
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << " \n -----Incorrect_Polymorphism-----" << std::endl;
	{
	const WrongAnimal *wronganimal = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	
	std::cout << wronganimal->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	
	wronganimal->makeSound(); 
	wrongcat->makeSound();

	delete wronganimal;
	delete wrongcat;

	return 0;
	}
}
