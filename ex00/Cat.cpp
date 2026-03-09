/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:10:31 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/09 20:15:10 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------
Cat::Cat() : Animal()
{
    // Set the runtime type to "Cat" for identification.
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    // Copy the base Animal part.
    if (this != &other)
        Animal::operator=(other); // call base class assignment operator         
    std::cout << "Cat assignment operator called" << std::endl;     
    return *this;   
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
// -----------------------------------------------------
// *** MEMBER FUNCTION ***
// -----------------------------------------------------

void Cat::makeSound() const
{
    // Cat-specific sound.
    std::cout << "Meow! Meow!" << std::endl;
}
