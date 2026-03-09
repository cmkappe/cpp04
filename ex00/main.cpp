/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:10:38 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/09 20:39:44 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Basic polymorphism test ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- Array of Animals test ---" << std::endl;
    const Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int idx = 0; idx < 4; ++idx)
    {
        std::cout << animals[idx]->getType() << ": ";
        animals[idx]->makeSound();
    }
    for (int idx = 0; idx < 4; ++idx)
        delete animals[idx];

    std::cout << "\n--- Copy and assignment test ---" << std::endl;
    Dog originalDog;
    Dog copiedDog(originalDog);
    Cat originalCat;
    Cat assignedCat;
    assignedCat = originalCat;

    std::cout << "Original Dog: ";
    originalDog.makeSound();
    std::cout << "Copied Dog: ";
    copiedDog.makeSound();
    std::cout << "Original Cat: ";
    originalCat.makeSound();
    std::cout << "Assigned Cat: ";
    assignedCat.makeSound();

    std::cout << "\n--- Wrong polymorphism test ---" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongMeta->getType() << std::endl;
    std::cout << wrongCat->getType() << std::endl;

    wrongCat->makeSound();
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
