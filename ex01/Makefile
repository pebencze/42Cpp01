NAME 			= 	zombie1
CPP 			= 	c++
CPPFLAGS 		= 	-Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
INCL = Zombie.hpp

all: $(NAME)

%.o: %.cpp $(INCL)
	$(CPP) $(CPPFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
