NAME = phonebook

SRC = main.cpp contact.cpp phonebook.cpp


CFLAGS = -Wall -Wextra -Werror -std=c++98

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
