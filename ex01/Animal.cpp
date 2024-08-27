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
