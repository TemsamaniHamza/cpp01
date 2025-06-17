CC = c++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = Myprogram 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -std=c++98

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all