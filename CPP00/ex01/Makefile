CC = c++
Cflags = -Wall -Wextra -Werror -std=c++98

NAME = ex01

all: $(NAME)

$(NAME):
	$(CC) $(Cflags) *.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re