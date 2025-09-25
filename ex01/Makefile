NAME	= Fixed
CXX		= g++
CFLAGS	= -std=c++98 -pedantic

SRCS	= main.cpp Fixed.cpp
OBJECT	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECT)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re