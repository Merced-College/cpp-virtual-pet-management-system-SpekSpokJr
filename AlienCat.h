#ifndef ALIEN_CAT_H
#define ALIEN_CAT_H

#include "Pet.h" // Assuming Pet is the base class
#include <string>

class AlienCat : public Pet {
private:
    std::string CommunicationStyle;
    std::string mood;

public:
    // Default constructor
    AlienCat();

    // Constructor with parameters
    AlienCat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& CommunicationStyle, const std::string& mood);

    // Setter for CommunicationStyle
    void setCommunicationStyle(const std::string& CommunicationStyle);

    // Getter for CommunicationStyle
    std::string getCommunicationStyle() const;

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