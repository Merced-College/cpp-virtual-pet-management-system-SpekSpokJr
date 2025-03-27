#ifndef ALIEN_CAT_H
#define ALIEN_CAT_H

#include "Pet.h" // Assuming Pet is the base class
#include <string>

class AlienCat : public Pet {
private:
    std::string favoriteToy;
    std::string mood;

public:
    // Default constructor
    AlienCat();

    // Constructor with parameters
    AlienCat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy, const std::string& mood);

    // Setter for favoriteToy
    void setFavoriteToy(const std::string& favoriteToy);

    // Getter for favoriteToy
    std::string getFavoriteToy() const;

    // Setter for mood
    void setMood(const std::string& mood);

    // Getter for mood
    std::string getMood() const;

    // Override printInfo
    void printInfo() const override;

    // Override makeSound
    void makeSound() const override;
};

#endif // ALIEN_CAT_H