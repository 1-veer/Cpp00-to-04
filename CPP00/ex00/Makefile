CC = c++
Cflags = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME):
	$(CC) $(Cflags) megaphone.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re