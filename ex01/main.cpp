#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Create an array of Animal pointers
    const int numAnimals = 6;
    Animal* animals[numAnimals];
    
    // Fill the array with Dogs and Cats
    for (int i = 0; i < numAnimals / 2; ++i)
    {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; ++i)
    {
        animals[i] = new Cat();
    }
    
    // Output the type and sound of each animal
    for (int i = 0; i < numAnimals; ++i)
    {
        std::cout << animals[i]->getType() << " makes sound: ";
        animals[i]->makeSound();
    }
    
    // Delete each Animal
    for (int i = 0; i < numAnimals; ++i)
    {
        delete animals[i];
    }

    return 0;
}
