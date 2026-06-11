/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 15:11:28 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/10 12:52:16 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	std::cout << " \n --Correct Polymorphism " << std::endl;
	
	const Animal *meta = new Animal(); 
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound! 
	j->makeSound(); //will output the Dog sound
	meta->makeSound();

	std::cout << " \n --Incorrect Polymorphism_does_not_make_wrong_cat_sound" << std::endl;
	
	const WrongAnimal *z = new WrongCat();
	std::cout << z->getType() << " " << std::endl;
	z->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete z;
	
	return 0; 
}

