/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:51:13 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:21 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    Type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) : Type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & ins)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = ins;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & ins)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &ins)
        Type = ins.Type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (Type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}
