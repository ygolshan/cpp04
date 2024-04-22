/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:48:55 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:21 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    Type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const & ins) : AAnimal(ins)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (this != &ins)
    {
        Type = ins.Type;
        brain = new Brain(*ins.brain);
    }
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat & Cat::operator=(Cat const & ins)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &ins)
    {
        Type = ins.Type;
        if (brain)
            delete brain;
        brain = new Brain(*ins.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "mio mio" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (brain);
}
