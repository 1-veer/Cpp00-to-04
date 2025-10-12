CC = c++
Cppflags = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	$(CC) $(Cppflags) megaphone.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
