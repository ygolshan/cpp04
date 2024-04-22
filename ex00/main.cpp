/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:50:44 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 14:00:55 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{	
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
	
		i->makeSound();
		j->makeSound();
		meta->makeSound();
	
		delete meta;
		delete j;
		delete i;
	}
	
	{
		std::cout << " WRONG ANIMAL " << std::endl;
		const WrongAnimal *i = new WrongCat();

		i->makeSound();
		delete i;
	}

	return(0);
}
