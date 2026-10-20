/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:49:09 by uvadakku          #+#    #+#             */
/*   Updated: 2026/10/02 17:02:33 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"
#include <string>

class Brain 
{
	private:
		std::string ideas[100];
		
	public:
		//Constructor
		Brain();
		Brain(const Brain &other);
		
		//Overloaded constructor
		Brain &operator = (const Brain &other);

		//Deconstructor
		~Brain();

		//setter
		void setIdea(int index, const std::string &idea);
		//getter
		std::string getIdea(int index)const;
		void printIdeas() const;
	};

#endif
	
