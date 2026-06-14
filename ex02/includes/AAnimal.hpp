/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:16:32 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/13 06:42:51 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string type;
		
	public:
		
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal(); //Must remain virtual!
	
	std::string getType() const;
	
	//THIS IS THE FIX: The '= 0' makes it a pure virtual function.
 //AAnimal is now an abstract class and cannot be instantiated.
	virtual void makeSound() const = 0;
};

#endif

