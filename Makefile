NAME = physix

SRC = main.cpp

SRC_PATH = src/

LIB = physix.hpp

LIB_PATH = lib/

all: $(NAME)

$(NAME):
	g++ -v -I lib -o $(NAME) $(addprefix $(SRC_PATH), $(SRC))

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all re fclean clean
