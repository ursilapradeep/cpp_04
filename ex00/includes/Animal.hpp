/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:16:32 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/06 15:14:30 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
	protected:
	
	std::string type;
	Animal(std::string type);
	
	public:
		
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	~Animal()
	
	void Animal::makeSound(void) const;
	std::string Animal::getType(void) const;
}

#endif
