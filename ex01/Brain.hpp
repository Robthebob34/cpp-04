/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:49:57 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:50:03 by robinheck        ###   ########.fr       */
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
    Brain();
    ~Brain();

    // Copy constructor for deep copying
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);

    // Getter and setter for ideas
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string &idea);
};

#endif
