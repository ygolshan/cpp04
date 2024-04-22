# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 17:32:41 by ygolshan          #+#    #+#              #
#    Updated: 2023/11/28 18:08:34 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 
ins = main.cpp  Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp AAnimal.cpp
OBJ = $(ins:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re