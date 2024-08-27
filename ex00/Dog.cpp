/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:43:26 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:43:32 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor
Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog created" << std::endl;
}

// Destructor
Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}

// Override the makeSound function
void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
