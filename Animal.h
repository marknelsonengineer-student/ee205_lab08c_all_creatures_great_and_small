///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Mark Nelson <marknels@hawaii.edu>
/// @date   05_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

enum Gender {
    UNKNOWN_GENDER, MALE, FEMALE
};

const float UNKNOWN_WEIGHT = -1;

class Animal {
public:
    Animal(const std::string &newSpecies);

    Animal(const std::string &newSpecies, Gender gender);

    Animal(const std::string &newSpecies, Gender gender, float newWeight);

    Animal(const std::string &newSpecies, float newWeight);

    static const std::string &getKingdom();

    const std::string &getSpecies() const;

    Gender getGender() const;

    void setGender(Gender newGender);

    float getWeight() const;

    void setWeight(float newWeight);

    void printInfo();

    bool isValid();

protected:
    static const std::string kingdom ;
    std::string species;  // Required
    enum Gender gender = UNKNOWN_GENDER;
    float weight = UNKNOWN_WEIGHT ;

    bool validateWeight( const float newWeight );
    bool validateSpecies( const std::string newSpecies );

private:
    void setSpecies( const std::string newSpecies );
};


