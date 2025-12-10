CXX = c++
CXXFlags = -Wall -Wextra -Werror -std=c++98 #-Wno-delete-non-virtual-dtor

NAME = ex03
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp  

all : $(NAME)
$(NAME) : $(SRCS)
	$(CXX) $(CXXFlags) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean : clean
re : clean all
.PHONY : all clean fclean re 