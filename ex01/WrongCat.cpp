/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:51:55 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:21 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
    Type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & ins) : WrongAnimal(ins)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = ins;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & ins)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &ins)
        Type = ins.Type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes a sound" << std::endl;
}