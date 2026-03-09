# pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		~WrongCat();

		WrongCat& operator=(const WrongCat& other);

		// This hides WrongAnimal::makeSound, but without virtual it won't be used
		// when accessed through a WrongAnimal*.
		void makeSound() const;
};
