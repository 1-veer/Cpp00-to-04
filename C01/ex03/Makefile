CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = violence
SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

all: $(NAME) 
$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f $(NAME)
re: clean all
.PHONY: all clean re