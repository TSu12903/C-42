NAME := zombie_horde
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
SRC :=	Zombie.cpp \
		zombieHorde.cpp\
		main.cpp

OBJ := $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re