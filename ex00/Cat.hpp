# pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        // Cat is a specific Animal that overrides the sound it makes.
        Cat();
        Cat(const Cat& other);
        ~Cat();

        Cat& operator=(const Cat& other);

        // Override the base behavior with a cat-specific sound
        void makeSound() const override;
};
