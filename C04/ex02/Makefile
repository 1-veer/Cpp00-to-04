CXX = c++
CXXFlags = -Wall -Wextra -Werror -std=c++98 #-Wno-delete-non-virtual-dtor

NAME = ex02
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp 

all : $(NAME)
$(NAME) : $(SRCS)
	$(CXX) $(CXXFlags) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean : clean
re : clean all
.PHONY : all clean fclean re 