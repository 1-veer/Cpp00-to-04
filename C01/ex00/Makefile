CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)
$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f $(NAME)
re: clean all
.PHONY: all clean re