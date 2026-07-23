NAME = ex02

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -Iinclude -std=c++98

INCDIR = include/
SRCDIR = src/
OBJDIR = obj/

HEADERS = $(INCDIR)Bureaucrat.hpp $(INCDIR)AForm.hpp $(INCDIR)ShrubberyCreationForm.hpp $(INCDIR)RobotomyRequestForm.hpp

SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

SRCS_WITH_SRCDIR = $(addprefix $(SRCDIR),$(SRCS))
OBJS = $(patsubst $(SRCDIR)%.cpp, $(OBJDIR)%.o, $(SRCS_WITH_SRCDIR))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.cpp $(HEADERS)
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re