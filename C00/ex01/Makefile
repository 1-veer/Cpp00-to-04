CC = c++
Cppflags = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all: $(NAME)

$(NAME): main.cpp
	$(CC) $(Cppflags) main.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re