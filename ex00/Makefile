# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robinheck <robinheck@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 15:45:54 by robinheck         #+#    #+#              #
#    Updated: 2024/08/27 15:45:56 by robinheck        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Sources
SRCS = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

# Objects
OBJS = $(SRCS:.cpp=.o)

# Executable
NAME = polymorphism_test

# Default rule
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Rule to compile .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS)

# Rule to remove everything including the executable
fclean: clean
	rm -f $(NAME)

# Rebuild rule
re: fclean all

.PHONY: all clean fclean re
