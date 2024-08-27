# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Sources
SRCS = Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

# Objects
OBJS = $(SRCS:.cpp=.o)

# Executable
NAME = animal_test

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
