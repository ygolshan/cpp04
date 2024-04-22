/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:47:31 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:21 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : Type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & ins)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = ins;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const & ins)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &ins)
        Type = ins.Type;
    return (*this);
}

std::string Animal::getType() const
{
    return (Type);
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}

