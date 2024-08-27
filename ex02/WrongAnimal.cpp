/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:44:24 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:44:38 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() : type("Unknown")
{
    std::cout << "WrongAnimal created with type: " << type << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

// Non-virtual function
void WrongAnimal::makeSound() const
{
    std::cout << "Some generic wrong animal sound" << std::endl;
}

// Getter for type
std::string WrongAnimal::getType() const
{
    return type;
}
