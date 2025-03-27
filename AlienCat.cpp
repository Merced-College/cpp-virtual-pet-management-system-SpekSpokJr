#include "AlienCat.h"
#include <iostream>

// Default constructor
AlienCat::AlienCat() : Pet(), CommunicationStyle("Unknown"), mood("Neutral") {}

// Constructor with parameters
AlienCat::AlienCat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& CommunicationStyle, const std::string& mood)
    : Pet(name, species, age, hungerLevel), CommunicationStyle(CommunicationStyle), mood(mood) {}

// Setter for CommunicationStyle
void AlienCat::setCommunicationStyle(const std::string& CommunicationStyle) {
    this->CommunicationStyle = CommunicationStyle;
}

// Getter for CommunicationStyle
std::string AlienCat::getCommunicationStyle() const {
    return CommunicationStyle;
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
    std::cout << "Communication Style: " << CommunicationStyle << std::endl;
    std::cout << "Mood: " << mood << std::endl;
}

// Override makeSound
void AlienCat::makeSound() const {
    std::cout << "Zeeble Zorp!" << std::endl;
}