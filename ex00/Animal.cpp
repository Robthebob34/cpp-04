/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:42:48 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:42:56 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal() : type("Unknown")
{
    std::cout << "Animal created with type: " << type << std::endl;
}

// Destructor
Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

// Virtual function to be overridden in derived classes
void Animal::makeSound() const
{
    std::cout << "Some generic animal sound" << std::endl;
}

// Getter for type
std::string Animal::getType() const
{
    return type;
}
