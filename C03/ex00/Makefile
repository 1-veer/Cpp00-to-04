CXX = c++
CXXFlags = -Wall -Wextra -Werror -std=c++98

NAME = ClapTrap
SRCS = main.cpp ClapTrap.cpp

all : $(NAME);
$(NAME) : $(SRCS)
	$(CXX) $(CXXFlags) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean : clean
re : clean all
.PHONY : all clean fclean re 