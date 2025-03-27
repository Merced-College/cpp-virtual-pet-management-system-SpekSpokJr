#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"

int main() {
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();

    std::cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    std::cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0) 
        std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0) std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else std::cout << "Both pets have the same name.\n";

    pet2.makeSound();
    pet1.makeSound();

    //testing the dog object
    Dog dog1("Buddy", "Dog", 5, 3, "Golden Retriever");
    std::cout << "\nDog Info:\n";
    dog1.printInfo();
    dog1.makeSound();

    //testing the cat object
    Cat cat1("Mittens", "Cat", 4, 2, "Ball");
    std::cout << "\nCat Info:\n";
    cat1.printInfo();
    cat1.makeSound();

    //polymorphism
    std::cout << std::endl;
    Pet* petPtr = new Cat("Tuna", "Cat", 2, 4, "Mouse Toy");
    petPtr->printInfo();
    petPtr->makeSound();
    delete petPtr; // Clean up
    std::cout << std::endl;
    Pet* petPtr = new Dog("Fluffy", "Dog", 4, 2, "Poodle");
    petPtr->printInfo();
    petPtr->makeSound();
    delete petPtr; // Clean up

    return 0;
}
