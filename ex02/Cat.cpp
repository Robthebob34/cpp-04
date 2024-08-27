#include "Cat.hpp"

// Constructor
Cat::Cat() : brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat created" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other) : brain(new Brain(*other.brain))
{
    type = other.type;
    std::cout << "Cat copied" << std::endl;
}

// Assignment operator
Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        type = other.type;
    }
    std::cout << "Cat assigned" << std::endl;
    return *this;
}

// Destructor
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

// Define the makeSound function
void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}
