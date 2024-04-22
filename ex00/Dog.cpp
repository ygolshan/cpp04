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

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    Type = "Dog";
}

Dog::Dog(Dog const & ins) : Animal(ins)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = ins;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & ins)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &ins)
        Type = ins.Type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}