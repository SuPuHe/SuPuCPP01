# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 11:26:48 by omizin            #+#    #+#              #
#    Updated: 2025/09/08 11:26:49 by omizin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
