/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:51:04 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/09 22:32:19 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ****
// -----------------------------------------------------
Brain::Brain()
{
    // Initialize all ideas with a default value
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "Empty idea";
}   

Brain::Brain(const Brain& other)
{
    // Deep copy all 100 ideas
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        // Deep copy on assignment as well
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    std::cout << "Brain assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

// -----------------------------------------------------
// *** MEMBER FUNCTIONS ***
// -----------------------------------------------------

void Brain::setIdea(int index, const std::string& idea)
{
    // Ignore invalid indices to keep the array safe
    if (index < 0 || index >= 100)
        return;
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    // Return empty string if index is out of range
    if (index < 0 || index >= 100)
        return "";
    return ideas[index];
}

