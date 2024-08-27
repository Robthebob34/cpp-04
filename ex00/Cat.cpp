/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:43:55 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:44:00 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor
Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat created" << std::endl;
}

// Destructor
Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}

// Override the makeSound function
void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}
