/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:22:52 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/04 18:39:37 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


Animal::Animal(void) : Animal("I_am_Animal") {};

Animal::Animal(std::string type) : type(type)
{
	std::cout << " Animal Constructor creates animal. Type: " << type << std::endl;
}

Animal::Animal(const Animal &other): type(other.type)
{
	std::cout << " Animal copy_constructor copies Animal from Type: " << other.type << std::endl;
}

Animal:: ~Animal(void)
{
	std::cout << " Animal destructor: " << other.type << std::endl;
}
Animal &operator=(const Animal &other);
{
	std::cout << "Animal copy assignment operator " << std::endl;
	
	if (this != &other)
	{
		type = other.other
	}
	return *this
}


