/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:50:44 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 15:13:29 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <string>

int main() {
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;
        delete i;

        Dog basicDog;
        basicDog.getBrain()->setIdea(0, "Basic idea");
        {
            Dog tmpDog = basicDog;
        }
        std::cout << "Basic Dog's Idea: " << basicDog.getBrain()->getIdea(0) << std::endl;
    }

    {
        Cat cat1;
        cat1.getBrain()->setIdea(0, "Cat's idea");
        Cat cat2(cat1);
        cat2.getBrain()->setIdea(0, "Copied Cat's idea");
        Cat cat3;
        cat3 = cat1;
        cat3.getBrain()->setIdea(0, "Assigned Cat's idea");
        std::cout << "Cat1's Idea: " << cat1.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied Cat2's Idea: " << cat2.getBrain()->getIdea(0) << std::endl;
        std::cout << "Assigned Cat3's Idea: " << cat3.getBrain()->getIdea(0) << std::endl;
    }

    {
        Dog dog1;
        dog1.getBrain()->setIdea(0, "Dog's idea");
        Dog dog2(dog1);
        dog2.getBrain()->setIdea(0, "Copied Dog's idea");
        Dog dog3;
        dog3 = dog1;
        dog3.getBrain()->setIdea(0, "Assigned Dog's idea");
        std::cout << "Dog1's Idea: " << dog1.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied Dog2's Idea: " << dog2.getBrain()->getIdea(0) << std::endl;
        std::cout << "Assigned Dog3's Idea: " << dog3.getBrain()->getIdea(0) << std::endl;
    }

    return 0;
}