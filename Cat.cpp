#include "Cat.h"
#include <iostream>

// Default constructor
Cat::Cat() : Pet(), favoriteToy("Unknown") {}

// Constructor with parameters
Cat::Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy)
    : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy) {}

// Setter for favoriteToy
void Cat::setFavoriteToy(const std::string& favoriteToy) {
    this->favoriteToy = favoriteToy;
}

// Getter for favoriteToy
std::string Cat::getFavoriteToy() const {
    return favoriteToy;
}

// Override printInfo
void Cat::printInfo() const {
    Pet::printInfo(); // Call base class printInfo
    std::cout << "Favorite Toy: " << favoriteToy << std::endl;
}

// Override makeSound
void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}