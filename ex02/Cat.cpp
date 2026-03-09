/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:10:31 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/09 20:45:36 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------
Cat::Cat() : Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {   
        Animal::operator=(other); // call base class assignment operator
        delete brain;            // free existing brain memory
        brain = new Brain(*other.brain); // deep copy of the brain
    }
    std::cout << "Cat assignment operator called" << std::endl;     
    return *this;   
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}
// -----------------------------------------------------
// *** MEMBER FUNCTION ***
// -----------------------------------------------------

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return brain->getIdea(index);
}
