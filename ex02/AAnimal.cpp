/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:27:22 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 15:03:18 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : Type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : Type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & ins)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = ins;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & ins)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &ins)
        Type = ins.Type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (Type);
}