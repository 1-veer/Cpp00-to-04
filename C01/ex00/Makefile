# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/10 22:55:28 by ayoub             #+#    #+#              #
#    Updated: 2025/11/11 00:36:46 by ayoub            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
.PHONY: all clean fclean re