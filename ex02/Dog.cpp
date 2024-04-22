/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:49:47 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:21 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    Type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog const & ins) : AAnimal(ins)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (this != &ins)
    {
        Type = ins.Type;
        brain = new Brain(*ins.brain);
    }
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog & Dog::operator=(Dog const & ins)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &ins)
    {
        Type = ins.Type;
        if (brain)
            delete brain;
        brain = new Brain(*ins.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (brain);
}