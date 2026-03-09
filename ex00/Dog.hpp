# pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        // Dog is a specific Animal that overrides the sound it makes
        Dog();
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);

        // Override the base behavior with a dog-specific sound
        void makeSound() const override;
};