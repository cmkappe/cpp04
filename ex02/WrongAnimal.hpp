# pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		// "Wrong" base class: no virtual methods.
		// This is used to demonstrate what goes wrong without virtual functions.
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& other);

		// Not virtual on purpose: calling through WrongAnimal* won't use WrongCat's sound.
		void makeSound() const;
		std::string getType() const;
};
