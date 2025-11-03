CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = account
SRCS = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re