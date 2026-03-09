/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:10:27 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/09 22:38:18 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------    
Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const Animal& other) : type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        type = other.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

// -----------------------------------------------------
// *** MEMBER FUNCTIONS ***
// -----------------------------------------------------

std::string Animal::getType() const
{
    return type;
}
