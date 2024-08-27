/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:45:33 by robinheck         #+#    #+#             */
/*   Updated: 2024/08/27 15:45:38 by robinheck        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Animal pointers
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    // Test type and sound
    std::cout << j->getType() << " makes sound: ";
    j->makeSound();
    std::cout << i->getType() << " makes sound: ";
    i->makeSound();
    std::cout << meta->getType() << " makes sound: ";
    meta->makeSound();
    
    // Wrong Animal pointers
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();
    
    // Test WrongAnimal
    std::cout << wcat->getType() << " makes sound: ";
    wcat->makeSound();
    std::cout << wmeta->getType() << " makes sound: ";
    wmeta->makeSound();

    // Clean up
    delete meta;
    delete j;
    delete i;
    delete wmeta;
    delete wcat;

    return 0;
}
