# pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& other);
        ~Dog();

        Dog& operator=(const Dog& other);

        void makeSound() const override;

        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;

    private:
        Brain* brain;
};