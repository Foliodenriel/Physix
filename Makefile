NAME = physix

SRC = main.cpp Phyvec.cpp PhyObject.cpp

SRC_PATH = src/

FLAGS = -lquadmath

all: $(NAME)

$(NAME):
	g++ -I lib -o $(NAME) $(addprefix $(SRC_PATH), $(SRC)) $(FLAGS)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all re fclean clean
