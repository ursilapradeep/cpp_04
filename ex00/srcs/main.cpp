/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:11:28 by uvadakku          #+#    #+#             */
/*   Updated: 2026/09/02 15:22:45 by uvadakku         ###   ########.fr       */
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
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound! 
	j->makeSound(); //will output the Dog sound
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << " \n -----Incorrect_Polymorphism-----" << std::endl;
	{
	const WrongAnimal *z = new WrongAnimal();
	const WrongAnimal *wj = new WrongCat();
	
	std::cout << wj->getType() << " " << std::endl;
	wj->makeSound(); 
	z->makeSound();

	delete z;
	delete wj;

	return 0;
	}
}


