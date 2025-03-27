#ifndef CAT_H
#define CAT_H

#include "Pet.h" // Assuming Pet is the base class
#include <string>

class Cat : public Pet {
private:
    std::string favoriteToy;

public:
    // Default constructor
    Cat();

    // Constructor with parameters
    Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy);

    // Setter for favoriteToy
    void setFavoriteToy(const std::string& favoriteToy);

    // Getter for favoriteToy
    std::string getFavoriteToy() const;

    // Override printInfo
    void printInfo() const override;

    // Override makeSound
    void makeSound() const override;
};

#endif // CAT_H