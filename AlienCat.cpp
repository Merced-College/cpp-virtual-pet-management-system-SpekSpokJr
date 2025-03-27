#include "AlienCat.h"
#include <iostream>

// Default constructor
AlienCat::AlienCat() : Pet(), favoriteToy("Unknown"), mood("Neutral") {}

// Constructor with parameters
AlienCat::AlienCat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy, const std::string& mood)
    : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy), mood(mood) {}

// Setter for favoriteToy
void AlienCat::setFavoriteToy(const std::string& favoriteToy) {
    this->favoriteToy = favoriteToy;
}

// Getter for favoriteToy
std::string AlienCat::getFavoriteToy() const {
    return favoriteToy;
}

// Setter for mood
void AlienCat::setMood(const std::string& mood) {
    this->mood = mood;
}

// Getter for mood
std::string AlienCat::getMood() const {
    return mood;
}

// Override printInfo
void AlienCat::printInfo() const {
    Pet::printInfo(); // Call base class printInfo
    std::cout << "Favorite Toy: " << favoriteToy << std::endl;
    std::cout << "Mood: " << mood << std::endl;
}

// Override makeSound
void AlienCat::makeSound() const {
    std::cout << "Zeeble Zorp!" << std::endl;
}