/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:25:31 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:21 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "idea";
}

Brain::Brain(Brain const & ins)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = ins;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & ins)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &ins)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = ins.getIdea(i);
    }
    return (*this);
}

std::string const & Brain::getIdea(int index) const
{
    return (_ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
    _ideas[index] = idea;
}

