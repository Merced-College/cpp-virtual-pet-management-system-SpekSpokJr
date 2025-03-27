#include "Pet.h"
#include <iostream>

// Initialize the static variable
int Pet::totalPets = 0;

// Default constructor
Pet::Pet() : name("Unknown"), species("Unknown"), age(0), hungerLevel(0) {
    totalPets++; // Increment totalPets when a new pet is created
}

// Constructor with parameters
Pet::Pet(const std::string& name, const std::string& species, int age, int hungerLevel)
    : name(name), species(species), age(age), hungerLevel(hungerLevel) {
    totalPets++; // Increment totalPets when a new pet is created
}

// Destructor
Pet::~Pet() {
    std::cout << "Pet " << name << " has been destroyed." << std::endl;
    totalPets--; // Decrement totalPets when a pet is destroyed
}

// Accessors (Getters)
std::string Pet::getName() const {
    return name;
}

std::string Pet::getSpecies() const {
    return species;
}

int Pet::getAge() const {
    return age;
}

int Pet::getHungerLevel() const {
    return hungerLevel;
}

// Mutators (Setters)
void Pet::setName(const std::string& name) {
    this->name = name;
}

void Pet::setSpecies(const std::string& species) {
    this->species = species;
}

void Pet::setAge(int age) {
    this->age = age;
}

void Pet::setHungerLevel(int level) {
    this->hungerLevel = level;
}

// CompareTo
int Pet::compareTo(const Pet& other) const {
    if (name < other.name) return -1;
    if (name > other.name) return 1;
    return 0;
}

// Output Function
void Pet::printInfo() const {
    std::cout << "Name: " << name << "\nSpecies: " << species
              << "\nAge: " << age << "\nHunger Level: " << hungerLevel << std::endl;
}

// Other functions
void Pet::makeSound() const {
    std::cout << name << " made an undefined sound." << std::endl;
}

// Static function to get the total number of pets
int Pet::getTotalPets() {
    return totalPets;
}
