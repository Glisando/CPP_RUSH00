# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 17:07:17 by hdanylev          #+#    #+#              #
#    Updated: 2018/06/20 22:19:07 by hdanylev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro
SRC =	main.cpp \
		StarShip.class.cpp \
		Unit.class.cpp \
		Enemy.class.cpp \
		Game.class.cpp \
		Bullet.class.cpp

OBJ = $(SRC:.cpp=.o)
HDRS = StarShip.class.hpp Unit.class.hpp Enemy.class.hpp Game.class.hpp Bullet.class.hpp
CLANG++ = clang++
CL_FLAGS = -Wall -Werror -Wextra -std=c++98
NCURS = -O3 -lncurses

all: $(NAME)

$(NAME): $(OBJ) $(HDRS)
	@$(CLANG++) $(CL_FLAGS) -c $(SRC)
	@$(CLANG++) $(CL_FLAGS) $(NCURS) $(OBJ) -o $(NAME)
	@echo "\033[31mft_retro \033[35mMAKED\033[0m"

clean:
	@rm -f $(OBJ)
	@echo "\033[35mCLEANED\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[35mCLEANED ALL\033[0m"

re: fclean all

.PHONY: all clean fclean re
