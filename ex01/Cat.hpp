# pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& other);
        ~Cat();

        Cat& operator=(const Cat& other);

        void makeSound() const override;

        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;

    private:
        Brain* brain;
};
