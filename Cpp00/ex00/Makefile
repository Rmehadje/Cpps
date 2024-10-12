NAME = megaphone

CC = c++
CFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re