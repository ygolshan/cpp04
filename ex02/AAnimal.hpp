/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:27:41 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/29 15:05:31 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
    protected:
        std::string Type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(AAnimal const & ins);
        AAnimal & operator=(AAnimal const & ins);
        std::string getType() const;
        virtual void makeSound() const = 0;
        virtual ~AAnimal();

};

#endif