#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "AlienCat.h"

int main() {
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    std::cout << "Total Pets: " << Pet::getTotalPets() << "\n" << std::endl;

    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();
    std::cout << std::endl;

    std::cout << "Pet 2 Info:\n";
    pet2.printInfo();
    std::cout << std::endl;

    std::cout << "Comparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0) 
        std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0) 
        std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else 
        std::cout << "Both pets have the same name.\n";
    std::cout << std::endl;

    pet2.makeSound();
    pet1.makeSound();
    std::cout << std::endl;

    // Testing the dog object
    Dog dog1("Buddy", "Dog", 5, 3, "Golden Retriever");
    std::cout << "Dog Info:\n";
    dog1.printInfo();
    dog1.makeSound();
    std::cout << std::endl;

    // Testing the cat object
    Cat cat1("Mittens", "Cat", 4, 2, "Ball");
    std::cout << "Cat Info:\n";
    cat1.printInfo();
    cat1.makeSound();
    std::cout << std::endl;

    // Testing the alien cat object
    AlienCat alienCat1("Zara", "Alien Cat", 1, 5, "Telepathy", "Curious");
    std::cout << "Alien Cat Info:\n";
    alienCat1.printInfo();
    alienCat1.makeSound();
    std::cout << std::endl;

    std::cout << "Total Pets: " << Pet::getTotalPets() << "\n" << std::endl;

    // Polymorphism
    Pet* petPtr = new Cat("Tuna", "Cat", 2, 4, "Mouse Toy");
    petPtr->printInfo();
    petPtr->makeSound();
    delete petPtr; // Clean up
    std::cout << std::endl;

    petPtr = new Dog("Fluffy", "Dog", 4, 2, "Poodle");
    petPtr->printInfo();
    petPtr->makeSound();
    delete petPtr; // Clean up
    std::cout << std::endl;

    petPtr = new AlienCat("Zog", "Alien Cat", 3, 1, "Light Pulses", "Happy");
    petPtr->printInfo();
    petPtr->makeSound();
    delete petPtr; // Clean up
    std::cout << std::endl;

    std::cout << "Total Pets: " << Pet::getTotalPets() << "\n" << std::endl;

    return 0;
}
