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
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;

    std::cout << "\n--- Array of Animals test ---" << std::endl;
    const int size = 10;
    const Animal* animals[size];

    for (int idx = 0; idx < size; ++idx)
    {
        if (idx < size / 2)
            animals[idx] = new Dog();
        else
            animals[idx] = new Cat();
    }

    for (int idx = 0; idx < size; ++idx)
        animals[idx]->makeSound();

    for (int idx = 0; idx < size; ++idx)
        delete animals[idx];

    std::cout << "\n--- Deep copy test (Dog) ---" << std::endl;
    Dog dog;
    dog.setIdea(0, "Chase the ball");
    Dog dogCopy(dog);
    dog.setIdea(0, "Sleep in the sun");
    std::cout << "Original idea: " << dog.getIdea(0) << std::endl;
    std::cout << "Copied idea: " << dogCopy.getIdea(0) << std::endl;

    std::cout << "\n--- Deep copy test (Cat assignment) ---" << std::endl;
    Cat cat;
    cat.setIdea(1, "Climb the tree");
    Cat catAssigned;
    catAssigned = cat;
    cat.setIdea(1, "Nap on keyboard");
    std::cout << "Original idea: " << cat.getIdea(1) << std::endl;
    std::cout << "Assigned idea: " << catAssigned.getIdea(1) << std::endl;

    std::cout << "\n--- Wrong polymorphism test ---" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();
    wrongMeta->makeSound();
    delete wrongMeta;
    delete wrongCat;

    return 0;
}
