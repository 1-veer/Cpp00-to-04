CC = c++
Cppflags = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all: $(NAME)

$(NAME):
	$(CC) $(Cppflags) *.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re