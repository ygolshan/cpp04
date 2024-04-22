/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:48:35 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 15:11:27 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string Type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const & ins);
        Animal &operator=(Animal const & ins);
        std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();

};

#endif