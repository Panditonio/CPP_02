# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherbet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 15:28:06 by aherbet           #+#    #+#              #
#    Updated: 2023/06/20 15:28:07 by aherbet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		fixtalk

SRCS =		main.cpp Fixed.cpp

OBJS =		$(SRCS:.cpp=.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

CC =		c++ $(CFLAGS)

RM =		rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@
	@echo "[REPORT] $(NAME) assembled !"

%.o: %.cpp
	@$(CC) -c $< -o $@
	@echo "[REPORT] Object compiled !"

clean:
	@$(RM) $(OBJS)
	@echo "[REPORT] Objects cleaned !"

fclean: clean
	@$(RM) $(NAME)
	@echo "[REPORT] $(NAME) cleaned !"

re: fclean all

.PHONY: all clean fclean re
