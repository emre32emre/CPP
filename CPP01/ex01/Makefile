NAME	= MoarBraiiiiiiinnnzzzZ
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
MFILES	= Zombie.cpp zombieHorde.cpp main.cpp

all		:  run

run		:
	$(CC) -o $(NAME) $(CFLAGS) $(MFILES)

clean	:
	@rm -rf $(NAME)

re : fclean all

.PHONY: all run clean fclean re