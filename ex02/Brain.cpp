/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:50:15 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:50:21 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstring> // For std::memcpy

// Default constructor
Brain::Brain()
{
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = "";
    }
}

// Destructor
Brain::~Brain()
{
    // No dynamic memory to release
}

// Copy constructor
Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = other.ideas[i];
    }
}

// Assignment operator
Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

// Getter for ideas
std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}

// Setter for ideas
void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
