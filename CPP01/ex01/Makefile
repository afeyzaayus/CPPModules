NAME = zombie

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = 	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re clean