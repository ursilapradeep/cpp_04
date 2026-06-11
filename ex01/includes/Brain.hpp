/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:49:09 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/11 16:04:20 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

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

		//getter
		std::string getIdea(int index)const;
		const std::string *getIdeaAddress(int index)const;
		//setter
		void setIdea(int index, const std::string &idea);
	};

#endif
	
