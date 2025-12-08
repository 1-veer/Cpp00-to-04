CXX = c++
CXXFlags = -Wall -Wextra -Werror -std=c++98

NAME = ex00
SRCS = main.cpp animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

all : $(NAME);
$(NAME) : $(SRCS)
	$(CXX) $(CXXFlags) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean : clean
re : clean all
.PHONY : all clean fclean re 