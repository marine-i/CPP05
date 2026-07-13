NAME = ex00

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

HEADERS = Bureaucrat.hpp

SRC = main.cpp Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re