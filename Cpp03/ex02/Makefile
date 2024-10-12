NAME = ex02

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

CC = c++

all: $(NAME)

$(NAME):	$(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
