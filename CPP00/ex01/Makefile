NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = 	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

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