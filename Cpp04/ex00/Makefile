NAME = ex00

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

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
