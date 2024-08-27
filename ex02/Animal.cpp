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

// Getter for type
std::string Animal::getType() const
{
    return type;
}
