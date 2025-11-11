CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = Horde
SRCS = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)
$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f $(NAME)
re: clean all
.PHONY: all clean fclean re