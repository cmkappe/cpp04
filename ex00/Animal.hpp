# pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        // Base class for all animals.
        // The virtual destructor ensures derived destructors run when deleting
        // through an Animal*.
        Animal();
        Animal(const Animal& other);
        virtual ~Animal();

        Animal& operator=(const Animal& other);

        // Virtual so derived classes (Dog/Cat) can provide their own sound.
        virtual void makeSound() const;
        std::string getType() const;
};