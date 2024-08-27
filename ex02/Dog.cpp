#include "Dog.hpp"

// Constructor
Dog::Dog() : brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog created" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other) : brain(new Brain(*other.brain))
{
    type = other.type;
    std::cout << "Dog copied" << std::endl;
}

// Assignment operator
Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        type = other.type;
    }
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

// Destructor
Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

// Define the makeSound function
void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
