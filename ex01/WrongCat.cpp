/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:45:13 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:45:22 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor
WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

// Override the makeSound function
void WrongCat::makeSound() const
{
    std::cout << "Meow Meow (WrongCat)" << std::endl;
}
