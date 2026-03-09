/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:10:33 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/09 22:30:37 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------
Dog::Dog() : Animal()
{
    // Set the runtime type to "Dog" for identification
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    // Copy the base Animal part
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

// -----------------------------------------------------
// *** MEMBER FUNCTION ***
// -----------------------------------------------------

void Dog::makeSound() const
{
    // Dog-specific sound
    std::cout << "Woof! Woof!" << std::endl;
}